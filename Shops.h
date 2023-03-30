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
    string Shop_Owner_First_name; // shop owner function implementation do need owner name
    string Shop_Owner_Last_name;
    string Shop_Owner_CNIC;
    string Shop_Owner_Address;

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
            outfile << endl;
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
        ofstream outfile("Shop_Owner_Data.txt", ios::app); // openeing file for shop owner data
        {
            for (int i = 0; i < t; i++)
            {
                /* code */
                outfile << endl;
                cout << "ENTER SHOP OWNER FIRST NAME: ";
                cin >> Shop_owner[i].Shop_Owner_First_name;
                outfile << "SHOP OWNER FIRST NAME IS: " << Shop_owner[i].Shop_Owner_First_name << endl;
                cout << "ENTER SHOP OWNER SECOND NAME: ";
                cin >> Shop_owner[i].Shop_Owner_Last_name;
                outfile << "SHOP OWNER LAST NAME IS: " << Shop_owner[i].Shop_Owner_Last_name << endl;
                cout << "ENTER SHOP OWNER CNIC: ";
                cin >> Shop_owner[i].Shop_Owner_CNIC;
                outfile << "SHOP OWNER CNIC: " << Shop_owner[i].Shop_Owner_CNIC << endl;
                cout << "ENTER SHOP TYPE: ";
                cin >> Shop_owner[i].Shop_Type;
                outfile << "SHOP TYPE IS: " << Shop_owner[i].Shop_Type << endl;
                cout << "ENTER SHOP LOCATION: ";
                cin >> Shop_owner->Shop_Location;
                outfile << "SHOP LOCATION: " << Shop_owner[i].Shop_Location << endl;
                outfile << endl;
            }
        }
    }

    void getting_shop_details()
    {
        cout << "ENTER SHOP ID: ";
        string shop_id;
        cin >> shop_id;
        ifstream infile("SHOPS_DETAILS.txt");
        string detail;
        bool printlines = false;
        if (!infile.is_open())
        {
            cout << "FAILED TO OPEN THE FILE!" << endl;
        }
        while (getline(infile, detail))
        {
            if (detail.find(shop_id) != string::npos)
            {
                printlines = true;
                cout << detail << endl;
                for (int i = 0; i < 5; i++)
                {
                    if (getline(infile, detail))
                    {
                        cout << detail << endl;
                    }
                }
            }
        }
        cout << "\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }

    void getting_whole_shops_details()
    {
        ifstream infile("SHOPS_DETAILS.txt");
        string stor;
        while (getline(infile, stor))
        {
            cout << stor << endl;
        }
    }

    void check_owner_Date()
    {
        cout << "ENTER OWNER NAME: ";
        string owner_name;
        cin >> owner_name;
        ifstream infile("Shop_Owner_Data.txt");
        string own;
        if (!infile.is_open())
        {
            cout << "FILE CAN'T BE OPENED";
        }
        while (getline(infile, owner_name))
        {
            if (own.find(owner_name) != string::npos)
            {
                cout << own << endl;
                for (int i = 0; i < 5; i++)
                {
                    if (getline(infile, own))
                    {
                        cout << own << endl;
                    }
                }
            }
        }
    }

    void replace_shop_owner()
    {
        Shops s;
        string ID;
        cout << "ENTER SHOP OWNER NAME: ";
        cin >> ID;
        ifstream infile("Shop_Owner_Data.txt");
        ofstream outfile("temporary.txt");
        if (!infile.is_open())
        {
            cout << "FAILED TO OPEN THE FILE!" << endl;
            return;
        }
        int i = 0;
        string line;
        while (getline(infile, line))
        {
            if (line.find(ID) != string::npos)
            {
                i = 5;
                cout << "FOUND\n";
            
                s.add_shop_owner_data();
            
            }
            else
            {
                if (i == 0)
                {
                    outfile << line << endl;
                }
                else
                {
                    i--;
                }
            }
        }

        infile.close();
        outfile.close();

        // Removing the original file
        filesystem::remove("Shop_Owner_Data.txt");

        // Renaming temporary file to original name
        try
        {
            filesystem::rename("temporary.txt", "Shop_Owner_Data.txt");
        }
        catch (const filesystem::filesystem_error &e)
        {
            cerr << "Error renaming file: " << e.what() << endl;
        }
        cout << "\nPress Enter To Continue........\n";
        cin.ignore();
        cin.ignore();
    }
};

#endif //!__SHOPS__H__s