#include<string>
#include<iostream>
#include <fstream>
using namespace std;
class Accounts
{
    void calculate_employee_salary()
    {
        // string newline;
        string name; // EMPLOYEE NAME
        int time;    // time employee did work
        cout << "ENTER NAME OF EMPLOYEE: ";
        cin >> name;
        cout << "HOW MUCH WORK EMPLOYEE DID IN MINUTES: ";
        cin >> time;

        int k = 100 * time;

        ofstream outfile("names.txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "Error: Failed to open file for writing!" << endl;
        }
        else
        {
            outfile << "NAME IS: ";
            outfile << name;
            outfile << " ";
            outfile << "SALARY IS: ";
            outfile << k;
            outfile << "\n";
        }

        outfile.close();
    }

    void display_employee_salary()
    {
        string name_of;
        // string name;
        cout << "ENTER NAME OF EMPLOYEE: ";
        cin >> name_of;

        ifstream infile("names.txt");
        if (!infile.is_open())
        {
            cout << "Failed to open file!" << endl;
            // return 1;
        }
        else
        {
            string line;
            bool found = false;
            while (getline(infile, line))
            {
                if (line.find(name_of) != string::npos)
                {
                    found = true;
                    cout << line << endl;
                }
            }

            if (!found)
            {
                cout << "Name not found in file." << endl;
            }
        }
        infile.close();
    }
};