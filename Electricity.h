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
    ~Electricity(){}
};
#endif //!__ELECTRICITY__H__

