
#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Detail
{ // detail class
public:
    string fname, lname, EmailADdress, JobTitle, Status, gender, user_id; // attributes
    int PhoneNum, salary, hiringDate;

    Detail() {}

    void input_Date()
    {
        ofstream outfile("Detail.txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "ERROR FAILED TO OPEN FILE FOR WRITE";
        }
        else
        {

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
    void Display_Data() // display particular employee details
    {
        string name; // name of employee variable
        cout << "ENTER NAME OF EMPLOYEE: ";
        cin >> name;
        ifstream infile("Detail.txt");
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
                if (storing.find(name) != string::npos)
                {
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

    friend istream &operator>>(istream &in, Detail &x);        // friend function prototype
    friend ostream &operator<<(ostream &out, const Detail &y); // friend function prototype
};
#endif // OPPFINALPROJECT_DETAIL_H
