#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "Reports.h"
using namespace std;
class Detail
{
private:
    string fname, lname, EmailADdress, JobTitle, gender, user_id, hiringDate; // attributes
    unsigned long int salary, PhoneNum;
    int check;

public:
    int getCheck()
    {
        return check;
    }
    string getUser_Id()
    {
        return user_id;
    }
    Detail() {}
    void input_Date(string fileName)
    {
        string storing;
        int k = 0;
        ifstream infile(fileName + ".txt");
        if (infile.is_open())
        {
            while (getline(infile, storing))
            {
                if (storing.find(user_id) != string::npos)
                {
                    k = 1;
                }
            }
        }

        ofstream outfile(fileName + ".txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "Error Failed To Open File For Writing";
        }
        else
        {
            if (k != 1)
            {

                outfile << "Employee Id :";
                outfile << user_id;
                outfile << endl;
                outfile << "Name :";     // name for emply entering to file
                outfile << fname;        // first name of employ
                outfile << " " << lname; // last name of employ
                outfile << endl;
                outfile << "Email Address :"; // email address of employ
                outfile << EmailADdress;
                outfile << endl;
                outfile << "Job Title :"; // job title
                outfile << JobTitle;      // getting job title into file
                outfile << endl;
                outfile << "Gender :"; // gender of person
                outfile << gender;
                outfile << endl;
                outfile << "Phone Number :"; // phone number of person
                outfile << PhoneNum;
                outfile << endl;
                outfile << "Salary :"; // salary of person
                outfile << salary;
                outfile << endl;
                outfile << "Hiring Date :"; // hiring date of person
                outfile << hiringDate;
                outfile << endl;
                cout << "\nYour Data Is Stored Successfully..........\n";
            }
            else
            {
                cout << "\nSorry this User Id Is Already Exist.......\n";
            }
        }
    }
    void Display_Data(string fileName) // display particular employee details
    {
        string ID; // name of employee variable
        cout << "Enter Id Of Employee :";
        cin >> ID;
        user_id = ID;
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
            check = 0;
        }
        else
        {
            check = 0;
            string storing; // storing data in this string
            bool printlines = false;
            int linestoprint = 3;
            while (getline(infile, storing))
            {
                if (storing.find(ID) != string::npos) //!= -1
                {
                    check = 1;
                    printlines = true;
                    cout << storing << endl;
                    for (int i = 0; i < 7; i++)

                    {
                        if (getline(infile, storing))
                        {
                            cout << storing << endl;
                        }
                    }
                }
            }
        }
    }
    void Remove_Employee(string fileName)
    {
        string ID; // name of employee variable
        cout << "Enter Employee Id :";
        cin >> ID;
        // Open input file for reading
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
            return;
        }
        // Open output file for writing
        ofstream outfile("temporary.txt");
        if (!outfile.is_open())
        {
            cout << "Filed To Creat Temporary File!" << endl;
            infile.close();
            return;
        }
        // Copy data from input file to output file
        string storing;
        bool employeeFound = false;
        while (getline(infile, storing))
        {
            if (storing.find(ID) != string::npos)
            {
                employeeFound = true;
                cout << "Employee found and removed.\n";
                cout << storing << endl;
                for (int i = 0; i < 7; i++)
                {
                    if (getline(infile, storing))
                    {
                    }
                }
            }
            else
            {
                outfile << storing << endl;
            }
        }
        // Close files
        infile.close();
        outfile.close();
        if (!employeeFound)
        {
            cout << "Employee with ID " << ID << " not found.\n";
            filesystem::remove("temporary.txt");
            return;
        }
        // Remove original file
        try
        {
            filesystem::remove(fileName + ".txt");
        }
        catch (const filesystem::filesystem_error &e)
        {
            cerr << "Error removing file: " << e.what() << endl;
            filesystem::remove("temporary.txt");
            return;
        }
        // Rename temporary file to original name
        try
        {
            filesystem::rename("temporary.txt", fileName + ".txt");
        }
        catch (const filesystem::filesystem_error &e)
        {
            cerr << "Error Renaming File: " << e.what() << endl;
            return;
        }
        cout << "Employee with ID " << ID << " Removed Successfully.\n";
    }
    void Replace_employ(string fileName)
    {
        Detail d;
        string ID;
        cout << "Enter Id Of Employee: ";
        cin >> ID;
        ifstream infile(fileName + ".txt");
        ofstream outfile("temporary.txt");
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
            return;
        }
        int i = 0;
        string line;
        while (getline(infile, line))
        {
            if (line.find(ID) != string::npos)
            {
                i = 8;
                cout << "Found\n";
                cin >> d;
                d.input_Date(fileName);
            }
            else
            {
                if (i == 0)
                {
                    outfile << line << endl;
                }
                else
                {
                    i--;
                }
            }
        }

        infile.close();
        outfile.close();

        // Remove the original file
        filesystem::remove(fileName + ".txt");

        // Rename temporary file to original name
        try
        {
            filesystem::rename("temporary.txt", fileName + ".txt");
        }
        catch (const filesystem::filesystem_error &e)
        {
            cerr << "Error Renaming File: " << e.what() << endl;
        }
    }

    friend istream &operator>>(istream &in, Detail &x);        // friend function prototype
    friend ostream &operator<<(ostream &out, const Detail &y); // friend function prototype
};
#endif // OPPFINALPROJECT_DETAIL_HFF