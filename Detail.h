
#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Detail
{
public:
    string fname, lname, EmailADdress, JobTitle, Status, gender, user_id; // attributes
    int PhoneNum, salary, hiringDate;

    Detail() {}

    void input_Date(string in)
    {
        ofstream outfile(in + ".txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "ERROR FAILED TO OPEN FILE FOR WRITE";
        }
        else
        {
            outfile << endl;
            outfile << "EMPLOYEE ID IS : ";
            outfile << user_id;
            outfile << endl;
            outfile << "NAME IS: "; // name for emply entering to file
            outfile << fname;       // first name of employ
            outfile << lname;       // last name of employ
            outfile << endl;
            outfile << "EMAIL ADDRESS IS: "; // email address of employ
            outfile << EmailADdress;
            outfile << endl;
            outfile << "JOB TITLE: "; // job title
            outfile << JobTitle;      // getting job title into file
            outfile << endl;
            outfile << "STATUS: ";
            outfile << Status; // status of person
            outfile << endl;
            outfile << "GENDER: "; // gender of person
            outfile << gender;
            outfile << endl;
            outfile << "PHONENUM IS: "; // phone number of person
            outfile << PhoneNum;
            outfile << endl;
            outfile << "SALARY IS: "; // salary of person
            outfile << salary;
            outfile << endl;
            outfile << "HIRING DATE IS: "; // hiring date of person
            outfile << hiringDate;
            outfile << endl;
        }
    }
    void Display_Data(string file) // display particular employee details
    {
        string ID; // name of employee variable
        cout << "ENTER ID OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile(file + ".txt");
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
    }

    void Remove_Employee()
    {
        string ID; // name of employee variable
        cout << "ENTER ID OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile("Detail.txt");
        ofstream outfile("temporary.txt");
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
                    cout << "founded\n";
                }
                else
                {
                    outfile << storing;
                    outfile << endl;
                }
            }
        }
        infile.close();
        outfile.close();
        remove("Detail.txt");
        rename("temporary.txt", "Detail.txt");
    }

    void Replace_employ()
    {
        Detail d;
        string temporary;
        temporary = "temporary";

        string ID; // name of employee variable
        cout << "ENTER ID OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile("Detail.txt");
        ofstream outfile("temporary.txt");
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

                    cout << "founded\n";
                    // cin >> d;
                    // d.input_Date(temporary);
                }
                else
                {
                    outfile << storing;
                    outfile << endl;
                }
            }
        }
        infile.close();
        outfile.close();
        remove("Detail.txt");
        cin >> d;
        d.input_Date(temporary);
        rename("temporary.txt", "Detail.txt");
    }

    friend istream &operator>>(istream &in, Detail &x);        // friend function prototype
    friend ostream &operator<<(ostream &out, const Detail &y); // friend function prototype
};
#endif // OPPFINALPROJECT_DETAIL_H
