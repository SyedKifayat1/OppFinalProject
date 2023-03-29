#ifndef __SHOPS__H__
#define __SHOPS__H__

#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Shops : public Detail, public Report
{
protected:
    string Shop_Id_No;
    string Shop_Owner_Name;
    string Shop_Rent;
    string Shop_Type;
    string Shop_Location;
    string Owner_First_name; // shop owner function implementation do need owner name
    string Owner_Last_name;
    string Owner_CNIC;
    string Owner_Address;

public:
    Report ForAccount;
    Employ *shopsEmployee;
    Shops(Employ *shopsEmployee)
    {
        this->shopsEmployee = shopsEmployee;
    }

    Shops()
    {
    }

    void add_shop_Data()
    {
        cout << "ENTER NUMBER OF SHOPS: ";
        int a;
        cin >> a;
        Shops *Shops_number = new Shops[a];
        ofstream outfile("SHOPS_DETAILS.txt", ios::app);
        for (int i = 0; i < a; i++)
        {

            Shops_number[i].function_Taking_shops();
            outfile << "SHOP ID NO: ";
            outfile << Shops_number[i].Shop_Id_No;
            outfile << endl;
            outfile << "SHOP OWNER NAME: ";
            outfile << Shops_number[i].Shop_Owner_Name;
            outfile << endl;
            outfile << "ENTER RENT OF SHOPE: ";
            outfile << Shops_number[i].Shop_Rent;
            outfile << endl;
            outfile << "SHOP TYPE: ";
            outfile << Shops_number[i].Shop_Type;
            outfile << endl;
            outfile << "SHOP LOCATION: ";
            outfile << Shops_number[i].Shop_Location;
            outfile << endl;
        }
    }

    void function_Taking_shops()
    {
        cout << "ENTER SHOP ID NO: ";
        cin >> Shop_Id_No;
        cout << "ENTER SHOP OWNER NAME: ";
        cin >> Shop_Owner_Name;
        cout << "ENTER RENT OF SHAPE: ";
        cin >> Shop_Rent;
        cout << "ENTER SHOP TYPE: ";
        cin >> Shop_Type;
        cout << "ENTER SHOP LOCATION: ";
        cin >> Shop_Location;
    }

    void add_shop_owner_data()
    {
        cout << "HOW MANY SHOP OWNERS DATA ARE YOU ENTERING: ";
        int t;
        cin >> t;
        Shops *Shop_owner = new Shops[t];
        ofstream outfile("Shop_Owner_Data.txt"); // openeing file for shop owner data
        }
};

#endif //!__SHOPS__H__s