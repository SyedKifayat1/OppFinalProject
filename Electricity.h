#ifndef __ELECTRICITY__H__
#define __ELECTRICITY__H__
#include <iostream>
#include <string>
using namespace std;
class Electricity
{
protected:
    int voltage;
    string ElectricityType;
    int quantity;
    string location;  // Location of the maintenance
    long double cost; // Cost of the maintenance
    string equipment; // Equipment used for the maintenance
public:
    Electricity()
    {
        voltage = 0;
        string ElectricityType = "";
        int quantity = 0;
        string location = "";
        cost = 0;
        string equipment = "";
    }
    void setElectricityType()
    {
        cin.ignore();
        cout << "\nEnter a Type Of Electricity :";
        getline(cin, ElectricityType);
    }
    void setVoltage()
    {
        cout << "\nEnter Voltage Quantity :";
        cin >> voltage;
    }
    void setLocation()
    {
        cin.ignore();
        cout << "\nEnter The Location :";
        getline(cin, location);
    }
    void setQuantity()
    {
        cout << "\nEnter The Quantity :";
        cin >> quantity;
    }
    void setCost()
    {
        cout << "\nEnter The Cost :";
        cin >> cost;
    }
    void setEquipment()
    {
        cin.ignore();
        cout << "\nEnter The Equipment :";
        getline(cin, equipment);
    }
    void setElectricityType(string s)
    {
        ElectricityType = s;
    }

    void setVoltage(int n)
    {
        voltage = n;
    }
    void setLocation(string s)
    {
        location = s;
    }
    void setQuantity(int n)
    {
        quantity = n;
    }
    void setCost(long double n)
    {
        cost = n;
    }
    void setEquipment(string s)
    {
        equipment = s;
    }
    string getElectricityType()
    {
        return ElectricityType;
    }
    int getVoltage() const
    {
        return voltage;
    }
    string getLocation() const
    {
        return location;
    }
    int getQuantity() const
    {
        return quantity;
    }
    long double getCost() const
    {
        return cost;
    }
    string getEquipment() const
    {
        return equipment;
    }
};
#endif //!__ELECTRICITY__H__

// Define a class to manage the electricity maintenance records
// class ElectricityMaintenance
// {
// private:
//     static const int MAX_RECORDS = 100;                 // Maximum number of maintenance records
//     MaintenanceRecord maintenance_records[MAX_RECORDS]; // Array to hold the maintenance records
//     int num_records;                                // Number of maintenance records in the array

// public:
//     // Constructor to initialize the member variables
//     ElectricityMaintenance()
//     {
//         num_records = 0;
//     }

//     // Method to add a new maintenance record to the array
//     void addMaintenanceRecord(const MaintenanceRecord &record)
//     {
//         if (num_records < MAX_RECORDS)
//         {                                              // Check if the array is not full
//             maintenance_records[num_records] = record; // Add the record to the next available index
//             num_records++;                             // Increment the number of records
//         }
//         else
//         {
//             cout << "Error: Maximum number of records reached." << endl;
//         }
//     }

//     // Method to retrieve a maintenance record from the array
//     const MaintenanceRecord &getMaintenanceRecord(int index) const
//     {
//         if (index >= 0 && index < num_records)
//         { // Check if the index is valid
//             return maintenance_records[index];
//         }
//         else
//         {
//             cout << "Error: Invalid index." << endl;
//             // Return a default record object if the index is invalid
//             static const MaintenanceRecord default_record("", "", "", 0.0, "", "", "");
//             return default_record;
//         }
//     }

//     // Method to retrieve the number of maintenance records in the array
//     int getNumMaintenanceRecords() const
//     {
//         return num_records;
//     }
// };