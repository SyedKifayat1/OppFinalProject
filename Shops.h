#ifndef __SHOPS__H__
#define __SHOPS__H__
#include <string>
#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Shops : public Detail, public Report
{
protected:
    string Shop_Id_No;
    string Shop_Owner_Name;
    long long int Shop_Rent;
    string Shop_Type;
    string Shop_Location;
    string Shop_Owner_First_name; // shop owner function implementation do need owner name
    string Shop_Owner_Last_name;
    string Shop_Owner_CNIC;
    string Shop_Owner_Address;

public:
    TotalIncome &totalIncome = TotalIncome::getInstance();
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
        system("clear");
        cout << "........Welcome To Adding Shops Data........\n";
        ofstream outfile("SHOPS_DETAILS.txt", ios::app);
        function_Taking_shops();
        outfile << "Shop No :";
        outfile << Shop_Id_No;
        outfile << endl;
        outfile << "Shop Ower Name :";
        outfile << Shop_Owner_Name;
        outfile << endl;
        outfile << "Enter Rent Of Shop :";
        outfile << Shop_Rent;
        outfile << endl;
        outfile << "Shop Type :";
        outfile << Shop_Type;
        outfile << endl;
        outfile << "Shop Floor Location :";
        outfile << Shop_Location;
        outfile << endl;

        outfile.close();
    }
    void function_Taking_shops()
    {

        cin.ignore();
        cout << "Enter Shop No: ";
        getline(cin, Shop_Id_No);
        cout << "Enter Shop Owner Name :";
        getline(cin, Shop_Owner_Name);
        cout << "Enter Rent Of Shop :";
        cin >> Shop_Rent;
        totalIncome.AddShopTotalIncome(Shop_Rent);
        totalIncome.addShopIncome(Shop_Rent);
        cin.ignore();
        cout << "Enter Shop Type :";
        getline(cin, Shop_Type);
        cout << "Enter Shop Floor Location :";
        getline(cin, Shop_Location);
    }
    void add_shop_owner_data()
    {
        system("clear");
        cout << ".......Welcome To Adding Shop Owner Data.......\n";
        ofstream outfile("Shop_Owner_Data.txt", ios::app); // openeing file for shop owner data

        cout << "Enter Shop No :";
        cin >> Shop_Id_No;
        outfile << "Shop No :" << Shop_Id_No << endl;
        cout << "Enter Shop Owner First Name :";
        cin >> Shop_Owner_First_name;
        outfile << "Shop Owner First Name :" << Shop_Owner_First_name << endl;
        cout << "Enter Shop Owner Last Name :";
        cin >> Shop_Owner_Last_name;
        outfile << "Shop Owner Last Name :" << Shop_Owner_Last_name << endl;
        cout << "Enter Shop Owner Cnic :";
        cin >> Shop_Owner_CNIC;
        outfile << "Shop Owner Cnic :" << Shop_Owner_CNIC << endl;
        cout << "Enter Shop Type :";
        cin >> Shop_Type;
        outfile << "Shop Type :" << Shop_Type << endl;
        cout << "Enter Shop Floor Location :";
        cin >> Shop_Location;
        outfile << "Shop Floor Location :" << Shop_Location << endl;
        outfile << endl;
        outfile.close();
    }

    void getting_shop_details()
    {
        system("clear");
        cout << "......Welcome To Finding Shop Details.......\n";
        cout << "Enter Shop No :";
        string shop_id;
        cin >> shop_id;
        ifstream infile("SHOPS_DETAILS.txt");
        string detail;
        bool printlines = false;
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
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
    }

    void getting_whole_shops_details()
    {
        system("clear");
        cout << ".........Find Whole Shops Details Below.........\n";
        ifstream infile("SHOPS_DETAILS.txt");
        string stor;
        while (getline(infile, stor))
        {
            cout << stor << endl;
        }
    }

    void check_owner_Date()
    {
        system("clear");
        cout << "........Welcome To Finding Owner Details........\n";
        cout << "Enter Shop No :";
        string owner_id;
        cin >> owner_id;
        ifstream infile("Shop_Owner_Data.txt");
        string own;
        if (!infile.is_open())
        {
            cout << "FILE CAN'T BE OPENED";
        }
        while (getline(infile, own))
        {
            if (own.find(owner_id) != string::npos)
            {
                cout << own << endl;
                for (int i = 0; i < 6; i++)
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
        system("clear");
        Shops s;
        string ID;
        cout << ".......Welcome To Replacing Shop Owner Repository......\n";
        cout << "Enter Shop Owner Id :";
        cin >> ID;
        ifstream infile("Shop_Owner_Data.txt");
        ofstream outfile("temporary.txt");
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
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
    }
    void gettingShopRentDetails()
    {
        system("clear");
        cout << "........Welcome To Finding Shop Details.......\n";
        string shopId;
        cout << "\nEnter A Shop Id :";
        cin >> shopId;
        ifstream file("ShopRentDetails.txt");
        string storing;
        while (getline(file, storing))
        {
            if (storing.find(shopId) != string::npos)
            {
                cout << storing << endl;
                if (getline(file, storing))
                {
                    cout << storing << endl;
                }
            }
        }
    }
    void gettingAllshopsRentsDetails()
    {
        system("clear");
        cout << "........Welcome To Find Whole Shops Details Below.......\n";
        ifstream file("ShopRentDetails.txt");
        if (!file.is_open())
        {
            cout << "\nSorry File Does Not Exist!\n";
        }
        else
        {
            string storing;
            while (getline(file, storing))
            {
                cout << storing << endl;
            }
        }
    }
};

#endif //!__SHOPS__H__s