
#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include"Reports.h"
using namespace std;
class Detail
{
public:
    string fname, lname, EmailADdress, JobTitle, Status, gender, user_id; // attributes
    int PhoneNum, salary, hiringDate;
    Detail() {}
    void input_Date(string fileName)
    {
        string storing;
         int k = 0;
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "Sorry File is not exist !" << endl;
        }
        else
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
            cout << "ERROR FAILED TO OPEN FILE FOR WRITE";
        }
        else
        {
            if (k != 1)
            {
                outfile << endl;
                outfile << "EMPLOYEE ID IS :";
                outfile << user_id;
                outfile << endl;
                outfile << "NAME IS :"; // name for emply entering to file
                outfile << fname;       // first name of employ
                outfile << lname;       // last name of employ
                outfile << endl;
                outfile << "EMAIL ADDRESS IS :"; // email address of employ
                outfile << EmailADdress;
                outfile << endl;
                outfile << "JOB TITLE :"; // job title
                outfile << JobTitle;      // getting job title into file
                outfile << endl;
                outfile << "STATUS :";
                outfile << Status; // status of person
                outfile << endl;
                outfile << "GENDER :"; // gender of person
                outfile << gender;
                outfile << endl;
                outfile << "PHONENUM IS :"; // phone number of person
                outfile << PhoneNum;
                outfile << endl;
                outfile << "SALARY IS :"; // salary of person
                outfile << salary;
                outfile << endl;
                outfile << "HIRING DATE IS :"; // hiring date of person
                outfile << hiringDate;
                outfile << endl;
                cout<<"\nYour Data Is Stored Successfully..........\n";
            }
            else
            {
                cout<<"\nSorry this User Id Is Already Exist.......\n";
            }

        }
        cout<<"\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
         
    }
    void Display_Data(string fileName) // display particular employee details
    {
        string ID; // name of employee variable
        cout << "ENTER NAME OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "FAILED TO OPEN THE FILE!" << endl;
        }
        else
        {
            string storing; // storing data in this string
            bool printlines = false;
            int linestoprint = 3;
            while (getline(infile, storing))
            {
                if (storing.find(ID) != string::npos)
                {
                    printlines = true;
                    cout << storing << endl;
                    for (int i = 0; i < 8; i++)

                    {
                        if (getline(infile, storing))
                        {
                            cout << storing << endl;
                        }
                    }
                }
            }
        }
        cout<<"\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }
    void Remove_Employee(string fileName)
    {
        string ID; // name of employee variable
        cout << "ENTER ID OF EMPLOYEE: ";
        cin >> ID;
        // Open input file for reading
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "FAILED TO OPEN THE FILE!" << endl;
            return;
        }
        // Open output file for writing
        ofstream outfile("temporary.txt");
        if (!outfile.is_open())
        {
            cout << "FAILED TO CREATE TEMPORARY FILE!" << endl;
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
                for (int i = 0; i < 8; i++)
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
            cerr << "Error renaming file: " << e.what() << endl;
            return;
        }
        cout << "Employee with ID " << ID << " removed successfully.\n";
        cout<<"\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }
    void Replace_employ(string fileName)
    {
        Detail d;
        string ID;
        cout << "ENTER ID OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile(fileName + ".txt");
        ofstream outfile("temporary.txt");
        if (!infile.is_open())
        {
            cout << "FAILED TO OPEN THE FILE!" << endl;
            return;
        }
        int i = 0;
        string line;
        while (getline(infile, line))
        {
            if (line.find(ID) != string::npos)
            {
                i = 8;
                cout << "FOUND\n";
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
            cerr << "Error renaming file: " << e.what() << endl;
        }
        cout<<"\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }

    friend istream &operator>>(istream &in, Detail &x);        // friend function prototype
    friend ostream &operator<<(ostream &out, const Detail &y); // friend function prototype
};
#endif // OPPFINALPROJECT_DETAIL_HFF