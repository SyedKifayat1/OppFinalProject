#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "Reports.h"
using namespace std;

// This class contain Details of Employee of the Mall
class Detail
{
private:
    string fname, lname, EmailADdress, JobTitle, gender, user_id, hiringDate; // attribute
    unsigned long int salary, PhoneNum;                                       // unsigned long int store 32 bit
    int check;

public:
    int getCheck()
    {
        return check;
    }
    string getUser_Id() // this function return user id
    {
        return user_id;
    }
    Detail() {}                      // default constructor
    void input_Date(string fileName) //  this function take file name to input data into file
    {
        Detail get;
        string storing;
        int k = 0;
        ifstream infile(fileName + ".txt");
        ofstream outfile(fileName + ".txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "Error Failed To Open File For Writing";
        }
        else
        {
            cin.ignore();
            cout << "\nEnter User Id :";
            getline(cin , get.user_id);
            if (infile.is_open())
            {
                while (getline(infile, storing))
                {
                    if (storing.find(get.user_id) != string::npos)
                    {
                        k = 1;
                    }
                }
            }

            if (k != 1)
            {
                cin>>get;
                outfile << "Employee Id :";
                outfile <<get. user_id;
                outfile << endl;
                outfile << "Name :";     // name for emply entering to file
                outfile << get.fname;        // first name of employ
                outfile << " " << get.lname; // last name of employ
                outfile << endl;
                outfile << "Email Address :"; // email address of employ
                outfile <<get. EmailADdress;
                outfile << endl;
                outfile << "Job Title :"; // job title
                outfile << get.JobTitle;      // getting job title into file
                outfile << endl;
                outfile << "Gender :"; // gender of person
                outfile << get.gender;
                outfile << endl;
                outfile << "Phone Number :"; // phone number of person
                outfile << get.PhoneNum;
                outfile << endl;
                outfile << "Salary :"; // salary of person
                outfile << get.salary;
                outfile << endl;
                outfile << "Hiring Date :"; // hiring date of person
                outfile << get.hiringDate;
                outfile << endl<<endl;
                cout << "\nYour Data Is Stored Successfully..........\n";
            }
            else
            {
                cout << "\nSorry this User Id Is Already Exist.......\n";
            }
        }
    }

    // display particular employee details
    void Display_Data(string fileName)  // file name come in funciton 
    {
        string ID; // ID of employee 
        cout << "Enter Id Of Employee :";
        cin >> ID;  // Enter ID of employee 
        user_id = ID;   
        ifstream infile(fileName + ".txt");   // opening file in reading mode 


        // if file is not opening 
        if (!infile.is_open())  
        {
            cout << "Failed To Open File!" << endl;   
            check = 0;
        }
        // if file is opening 
        else
        {
            check = 0;   // retain check to zero 
            string storing; // storing data in this string
            bool printlines = false;    //printing lines is yet not started so that variable is false 
            int linestoprint = 3;    
            while (getline(infile, storing))   // fetching data from file which have object infile and storing that data to storing line by line
            {
                if (storing.find(ID) != string::npos) //   person is found 
                {
                    check = 1;   // make check variable 1 
                    printlines = true;  // printlines is now true 
                    cout << storing << endl;  
                    for (int i = 0; i < 7; i++)  // this loop would print consecutive 7 lines 

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

    // this function remove employee 
    void Remove_Employee(string fileName)  // the emplyee file name come from main 
    {
        string ID; // variable to store employ ID being entered by user 
        cout << "Enter Employee Id :"; // Display line to user for entering ID 
        cin >> ID;   // User input ID
          

        // opening Employ file input mode 
        ifstream infile(fileName + ".txt");
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
            return;
        }
       // opening temporary file for writing  output mode 
        ofstream outfile("temporary.txt");
        if (!outfile.is_open())
        {
            cout << "Filed To Creat Temporary File!" << endl;
            infile.close();
            return;
        }
        // Copy data from input file to output file
        string storing;   // variable that store data from file 
        bool employeeFound = false;  // variable to define current status of employee found 
        while (getline(infile, storing))    // looping to employee file for searching 
        {
            if (storing.find(ID) != string::npos)  // employee found 
            {
                employeeFound = true;
                cout << "Employee found and removed.\n";
                cout << storing << endl;  // print employee that has been found 
                for (int i = 0; i < 7; i++) // the loop ignore that employee and not output employee to temporary 
                {
                    if (getline(infile, storing))
                    {
                    }
                }
            }
            else   
            {
                outfile << storing << endl; // copying data of employee to temporary file 
            }
        }
        // Close files
        infile.close();  // closing employee file 
        outfile.close();   // closing temporary file 
        if (!employeeFound)  // employee not found 
        {
            cout << "Employee with ID " << ID << " not found.\n";
            filesystem::remove("temporary.txt");  // if employee not found then there is not need for temporary file then delete temporary file
            return;   // here program stop and return 
        }
        // Remove original file
        try
        {
            filesystem::remove(fileName + ".txt");  // remove original employee file 
        }

        // if some error occured in try block std::filesystem::filesystem_error exception is thrown. The code catches this exception and handles it in the following block of code
        catch (const filesystem::filesystem_error &e) //  In this code block, &e is a reference to an object of the std::filesystem::filesystem_error class that is thrown when an error occurs during the file deletion process
        {
            cerr << "Error removing file: " << e.what() << endl;    // cerr is used for error output to distinguish from cout 
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
            cerr << "Error Renaming File: " << e.what() << endl;  // what function contain description of problem 
            return;
        }
        cout << "Employee with ID " << ID << " Removed Successfully.\n";
    }

    // Replace employ function to replace employ 
    void Replace_employ(string fileName)
    {
        // Detail d;
        string ID;
        cout << "Enter Id Of Employee: ";
        cin >> ID;
        ifstream infile(fileName + ".txt");  // opening employee file 
        ofstream outfile("temporary.txt");  // opening temporary file 
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
                input_Date(fileName);
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

        infile.close();  // closing employee file 
        outfile.close();  // closing temporary file 

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
    ~Detail() {}
    friend istream &operator>>(istream &in, Detail &x);        // friend function prototype
    friend ostream &operator<<(ostream &out, const Detail &y); // friend function prototype
};
#endif // OPPFINALPROJECT_DETAIL_HFF