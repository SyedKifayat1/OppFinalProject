#ifndef __EMPLOYEE__H__
#define __EMPLOYEE__H__

#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "Detail.h"

class Employ : public Detail
{

public:
    Employ *Employee;
    // Employ() : Detail()
    // {
    void input_Data(string filename)
    {

        int p;
        cout << "ENTER SIZE OF EMPLOY: ";
        cin >> p;

        Employ *Employee = new Employ[p];
        for (int i = 0; i < p; i++)
        {
            cin >> Employee[i];
            Employee[i].input_Date(filename);
        }
    }
    void calculate_employee_salary()
    {
        
    }
    void Total_employee_Details(string filename)
    {
        ifstream file(filename + ".txt");
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
        }
        else
        {
            cerr << "Failed to open file." << endl;
            // return 1;
        }
    }
};
#endif //!__EMPLOYEE__H__
