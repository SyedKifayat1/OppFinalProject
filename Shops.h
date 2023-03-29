#ifndef __SHOPS__H__
#define __SHOPS__H__

#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Shops : public Detail, public Report
{

public:
    Report ForAccount;
    Employ *shopsEmployee;
    Shops(Employ *shopsEmployee)
    {
        this->shopsEmployee = shopsEmployee;
    }
    string Shop_Id_No;
    string Shop_Owner_Name;
    string Shop_Rent;
    string Shop_Type;
    string Shop_Location;
    Shops()
    {
    }

    void add_shop_Data()
    {
        cout << "ENTER NUMBER OF SHOPS: ";
        int a;
        cin >> a;
        Employ *Employs_number = new Employ[a];
        ofstream outfile("SHOPS_DETAILS.txt");
        for (int i = 0; i < a; i++)
        {

            outfile << " SHOP ID NO: ";
            outfile << Shop_Id_No;
            outfile << endl;
            outfile << "SHOP OWNER NAME: ";
            outfile << Shop_Owner_Name;
            outfile << endl;
            outfile << "ENTER RENT OF SHOPE: ";
            outfile << Shop_Rent;
            outfile << endl;
            outfile << "SHOP TYPE: ";
            outfile << Shop_Type;
            outfile << endl;
            outfile << "SHOP LOCATION: ";
            outfile << Shop_Location;
            outfile << endl;
        }
    }

    friend istream &operator>>(istream &inp, Shops &shp)
    {
        cout << "ENTER SHOP ID NO: ";
        inp >> shp.Shop_Id_No;
        cout << "ENTER SHOP OWNER NAME: ";
        inp >> shp.Shop_Owner_Name;
        cout << "ENTER RENT OF SHAPE: ";
        inp >> shp.Shop_Rent;
        cout << "ENTER SHOP TYPE: ";
        inp >> shp.Shop_Type;
        cout << "ENTER SHOP LOCATION: ";
        inp >> shp.Shop_Location;
    }
};

#endif //!__SHOPS__H__s