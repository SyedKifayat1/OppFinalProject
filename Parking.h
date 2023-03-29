#ifndef __PARKING__H__
#define __PARKING__H__

#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Parking : public Detail, public Report
{
protected:
    string carOwner;
    string carOwnerCnic;
    string carNumber;
    string carType;
    string carColor;
    int *ptr;

public:
    Report ForAccount;
    Employ *E2;
    Parking(Employ *E2)
    {
        this->E2 = E2;
    }

    Parking()
    {
        carOwner = "Murtaza khalid";
        carOwnerCnic = "1550119";
        carNumber = "1444";
        carType = "Vehicle";
        carColor = "black";
    }

    void Vehicle_entry()
    {
        ofstream outfile("Vehicle.txt");
        if (!outfile.is_open())
        {
            cout << "FILE DOES NOT EXSIST\n";
        }
        cout << "HOW MANY VEHCLES ARE ENTERING: ";
        int p;
        cin >> p;
        Parking *ptr = new Parking[p];
        for (int i = 0; i < p; i++)
        {
            cin >> ptr[i];
            outfile << endl;
            outfile << "CAR OWNER NAME: ";
            outfile << ptr[i].carOwner;
            outfile << endl;
            outfile << "CAR OWNER CNIC: ";
            outfile << ptr[i].carOwnerCnic;
            outfile << endl;
            outfile << "CAR REGISTERATION NUMBER IS: ";
            outfile << ptr[i].carNumber;
            outfile << endl;
            outfile << "CAR TYPE IS: ";
            outfile << ptr[i].carType;
            outfile << endl;
            outfile << "CAR COLOR IS: ";
            outfile << ptr[i].carColor;
            outfile << endl;
        }
    }
    // void calculate_employee_salary()
    // {

    // }
    void Vehicle_Disentry()
    {
        cout << "ENTER CAR OWNER NAME";
        string name;
        cin >> name;
        ifstream infile("Vehicle.txt");
        string storing;
        bool employeeFound = false;
        while (getline(infile, storing))
        {
            if (storing.find(name) != string::npos)
            {
                employeeFound = true;
                cout << " found and removed.\n";
                cout << storing << endl;
                for (int i = 0; i < 5; i++)
                {
                    if (getline(infile, storing))
                    {
                    }
                }
            }
        }
    }
    friend istream &operator>>(istream &inp, Parking &par)
    {
        cout << "ENTER OWNER NAME OF CAR: ";
        inp >> par.carOwner;
        cout << "ENTER CAR OWNER CNIC: ";
        inp >> par.carOwnerCnic;
        cout << "ENTER CAR REGISTERATION NUMBER: ";
        inp >> par.carNumber;
        cout << "ENTER CAR TYPE: ";
        inp >> par.carType;
        cout << "ENTER CAR COLOR: ";
        inp >> par.carColor;
        return inp;
    }
};
#endif //!__PARKING__H__