#ifndef __EMPLOYEE__H__
#define __EMPLOYEE__H__

#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "Detail.h"
#include "totalIncome.h"

class Employ : public Detail
{

public:
    void input_Emplyee_Data(string filename)
    {

        int p;
        cout << "ENTER SIZE OF EMPLOY: ";
        cin >> p;

        for (int i = 0; i < p; i++)
        {
            input_Data(filename);
        }
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
            cout << "Failed to open file." << endl;
            // return 1;
        }
    }
    ~Employ() {}
};
#endif //!__EMPLOYEE__H__
