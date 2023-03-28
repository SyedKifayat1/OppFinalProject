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
    int available_parking_Space;
    unsigned long Earnings;
    int *ptr;

public:
    Parking()
    {
        Earnings = 0;
        available_parking_Space = 0;
    }
    Report ForAccount;
    Employ E2;

    int getavailable_parking_space()
    {
        return available_parking_Space;
    }
    void set_available_parking()
    {
        cout << "ENTER PARKING SPACE: ";
        cin >> available_parking_Space;
    }

    int get_available_parking()
    {
        return available_parking_Space;
    }

    string get_Earnings()
    {
        ifstream iffile("Earnings.txt");
        string tor;
        if (!iffile.is_open())
        {
            cout << "FILE CAN'T OPENEING";
        }
        while (getline(iffile, tor))
        {
        }
        return tor;
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
        if (p <= available_parking_Space)
        {
            cout << "PER CAR PARKING FEE IS 100\n";
            for (int i = 0; i < p; i++)
            {

                Earnings = Earnings + 100;
            }
            ofstream out("Earnings.txt");
            out << Earnings;
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
                available_parking_Space--;
            }
        }
        else

        {
            cout << "SORRY PARKING SPACE HAS REACHED IT'S LIMIT!\n";
        }
    }

    void Vehicle_Disentry()
    {
        string ID; // name of employee variable
        cout << "ENTER EMPLOY NAME: ";
        cin >> ID;
        // Open input file for reading
        ifstream infile("Vehicle.txt");
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
                available_parking_Space++;
                cout << storing << endl;
                for (int i = 0; i < 5; i++)
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
            filesystem::remove("Vehicle.txt");
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
            filesystem::rename("temporary.txt", "Vehicle.txt");
        }
        catch (const filesystem::filesystem_error &e)
        {
            cerr << "Error renaming file: " << e.what() << endl;
            return;
        }
        cout << "CAR " << ID << " removed successfully.\n";
        cout << "\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
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

    void vehicle_details()
    {
        string ID; // name of employee variable
        cout << "ENTER NAME OF EMPLOYEE: ";
        cin >> ID;
        ifstream infile("Vehicle.txt");
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
                    for (int i = 0; i < 5; i++)

                    {
                        if (getline(infile, storing))
                        {
                            cout << storing << endl;
                        }
                    }
                }
            }
        }
        cout << "\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }
};
#endif //!__PARKING__H__