#ifndef __PARKING__H__
#define __PARKING__H__

#include <iostream>
#include <string>
#include <fstream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Parking  
{
protected:
    string carOwner;
    string carOwnerCnic;
    string carNumber;
    string carType;
    string carColor;
    int available_parking_Space;
    long double Earnings;
   

public:
    ~Parking(){}
    TotalIncome &totalIncome = TotalIncome::getInstance();  // singleton class instance creation one
    Report ForAccount;  // composition of report class object in parking class 
    Employ *parkingEmployee; // creating pointer of employ class for aggregation implementaion 
    Parking(Employ *parkingEmployee)  // employ class pointer has been passed through constructor 
    {
        this->parkingEmployee = parkingEmployee;
    }
    int check;

    Parking()  // default constructor 
    {
        carOwner = " ";
        carOwnerCnic = "";
        carNumber = "";
        carType = "";
        carColor = "";
        Earnings = 0;
        available_parking_Space = 0;
        // ptr = NULL;
    }

    void set_available_parking()  // setting available parking space 
    {
        while (true)
        {
            cout << "Enter Parking Space: ";
            cin >> available_parking_Space;
            if (check >= available_parking_Space)  // if parking space is already full 
            {
                cout << "\nSorry This Space Is Already Filed!\nPlease Increase The Space.....\n";
            }

            // if parking space is not full 
            else
            {
                cout << "\nNow Parking Space Is :" << available_parking_Space << endl;
                storeParkingSpace();
                break;
            }
        }
    }
  
    // return available parking space to user 
    int get_available_parking()
    {
        return available_parking_Space;
    }

     
    void Vehicle_entry()
    {
        ofstream outfile("Vehicle.txt", ios::app);  // opening vehicle file 

        // file is not opening 
        if (!outfile.is_open())
        {
            cout << "File Does Not Exist\n";
            return;
        }
       
     // parking space is full 
        if (0 == available_parking_Space)
        {
            cout << "Sorry Parking Space Has Reached It's Limit!\n";
            outfile.close();
            return;
        }

        cout << "Per Car Parking Fee Is :100\n";
        Earnings = 100;
        totalIncome.AddParkingTotalIncome(Earnings);
        totalIncome.addParkingIncome(Earnings);
        Parking entry;
        cout << "Enter Car Registeration No :";
        getline(cin, entry.carNumber);
        string storing;
        int k = 0;
        ifstream infile("Vehicle.txt");
        if (infile.is_open())
        {
            while (getline(infile, storing))
            {
                if (storing.find(entry.carNumber) != string::npos)
                {
                    k = 1;
                }
            }
        }
        if (k != 1)
        {
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
            outfile << endl
                    << endl;
            available_parking_Space--;
            storeParkingSpace();
        }
        else
        {
            cout << "\nSorry This Registration Number Car Is Already Exist!\n";
        }
        outfile.close();
    }

    void RestoreParkingSpace()
    {
        ifstream file("CurrentParkingSpace.txt"); // openingCurrentparkingSpace file 
        if (!file.is_open())
        {
            cout << "Error File Not Found" << endl;
        }
        else
        {
            int num;   
            string line;
            getline(file, line, ':');  // reading data from file till colon
            getline(file, line, '\n');  // reading data from file till end of line
            num = stoi(line);   // inbuilt function to convert string to integer 
            available_parking_Space = num;   // assigning available parking space to num 
            check = available_parking_Space;
        }
    } 

    // store parking space function 
    void storeParkingSpace()
    {
        try
        {
            ofstream file("CurrentParkingSpace.txt");
            if (!file.is_open())
            {
                cout << "\nError :Failed To Open File For Writing!\n";
            }
            else
            {
                file << "Current Parking Space :" << available_parking_Space;
                check = available_parking_Space;
            }
            file.close();
        }
        catch (exception e)
        {
            cout << e.what();
        }
    }

    // vehicle disentry function 
    void Vehicle_Disentry()
    {
        string ID;
        cout << "\nEnter Car Registeration No :";  // car registration id no 
        cin >> ID;
        // Open input file for reading 
        ifstream infile("Vehicle.txt");  // openign vehicle file 

        // if file is not openign then error is displayed to user of the program 
        if (!infile.is_open())
        {
            cout << "\nFailed To Open File!\n"
                 << endl;
            return;
        }
        // Open output file for writing
        ofstream outfile("temporary.txt");   // opening temporary file for copying data from vehicle fiel to temporary file 
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
                cout << "Car With Regesteration No " << ID << " Found And Removed.\n";
                available_parking_Space++;
                storeParkingSpace();
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
        inp.ignore();
        
        cout << "Enter Car Owner Name :";
        getline(inp, par.carOwner);
        cout << "Enter Car Owner Cnic :";
        getline(inp, par.carOwnerCnic);
        cout << "Enter Car Type :";
        getline(inp, par.carType);
        cout << "Enter Car Color :";
        getline(inp, par.carColor);
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
};
#endif //!__PARKING__H__