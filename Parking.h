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
    long double Earnings;
    int *ptr;

public:
    TotalIncome &totalIncome = TotalIncome::getInstance();
    Report ForAccount;
    Employ *parkingEmployee;
    Parking(Employ *parkingEmployee)
    {
        this->parkingEmployee = parkingEmployee;
    }

    Parking()
    {
        carOwner = "Murtaza khalid";
        carOwnerCnic = "1550119";
        carNumber = "1444";
        carType = "Vehicle";
        carColor = "black";
        Earnings = 0;
        available_parking_Space = 0;
    }

    int getavailable_parking_space()
    {
        return available_parking_Space;
    }
    void set_available_parking()
    {
        cout << "Enter Parking Space: ";
        cin >> available_parking_Space;
        cout << "\nNow Parking Space Is :" << available_parking_Space << endl;
    }

    int get_available_parking()
    {
        return available_parking_Space;
    }

    // string get_Earnings()
    // {
    //     ifstream iffile("Earnings.txt");
    //     string tor;
    //     if (!iffile.is_open())
    //     {
    //         cout << "File Can't Opening\n";
    //     }
    //     while (getline(iffile, tor))
    //     {
    //     }
    //     return tor;
    // }

    void Vehicle_entry()
    {
        ofstream outfile("Vehicle.txt");
        if (!outfile.is_open())
        {
            cout << "File Does Not Exist\n";
        }

        if (1 <= available_parking_Space)
        {
            cout << "Per Car Parking Fee Is :100\n";
            Earnings = 100;
            totalIncome.AddParkingTotalIncome(Earnings);
            totalIncome.addParkingIncome(Earnings);
            Parking entry;

            cin >> entry;

            outfile << "Car Registeration Number Is :";
            outfile << entry.carNumber;
            outfile << endl;
            outfile << "Car Owner Name :";
            outfile << entry.carOwner;
            outfile << endl;
            outfile << "Car Owner Cnic :";
            outfile << entry.carOwnerCnic;
            outfile << endl;
            outfile << "Car Type Is :";
            outfile << entry.carType;
            outfile << endl;
            outfile << "Car Color Is :";
            outfile << entry.carColor;
            outfile << endl;
            available_parking_Space--;
        
    }
    else

    {
        cout << "Sorry Parking Space Has Reached It's Limit!\n";
    }
} void Vehicle_Disentry()
{
    string ID; // name of employee variable
    cout << "\nEnter Car Registeration No :";
    cin >> ID;
    // Open input file for reading
    ifstream infile("Vehicle.txt");
    if (!infile.is_open())
    {
        cout << "\nFailed To Open File!\n" << endl;
        return;
    }
    // Open output file for writing
    ofstream outfile("temporary.txt");
    if (!outfile.is_open())
    {
        cout << "Failed To Creat Temporary File!" << endl;
        infile.close();
        return;
    }
    // Copy data from input file to output file
    string storing;
    bool CarFound = false;
    while (getline(infile, storing))
    {
        if (storing.find(ID) != string::npos)
        {
            CarFound = true;
            cout << "Car With Regesteration No "<<ID<<" Found And Removed.\n";
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
    if (!CarFound)
    {
        cout << "Car with Regesteration No " << ID << " Is Not Found.\n";
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
        cerr << "Error Removing File: " << e.what() << endl;
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
        cerr << "Error Renaming File: " << e.what() << endl;
        return;
    }
    cout << "CAR With Regesteration No" << ID << " Removed Successfully.\n";
    
}
friend istream &operator>>(istream &inp, Parking &par)
{
    cin.ignore();
    cout << "Enter Car Registeration No :";
    getline(inp , par.carNumber);
    cout << "Enter Car Owner Name :";
    getline(inp , par.carOwner);
    cout << "Enter Car Owner Cnic :";
    getline(inp , par.carOwnerCnic);
    cout << "Enter Car Type :";
    getline(inp ,par.carType);
    cout << "Enter Car Color :";
    getline(inp , par.carColor);
    return inp;
}

void vehicle_details()
{
    string ID; // name of employee variable
    cout << "Enter Car Registeration No :";
    cin >> ID;
    ifstream infile("Vehicle.txt");
    if (!infile.is_open())
    {
        cout << "Failed To Open File!" << endl;
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
    
}
}
;
#endif //!__PARKING__H__