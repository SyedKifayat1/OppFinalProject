#ifndef __SHOPS__H__
#define __SHOPS__H__
#include <string>
#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Shops : public Detail, public Report   // multiple inheritence of shops with Detail and Report 
{
protected:
    string Shop_Id_No;     
    string Shop_Owner_Name;
    long long int Shop_Rent;  // storing 64 bit integer 
    string Shop_Type;
    string Shop_Location;
    string Shop_Owner_First_name; // shop owner function implementation do need owner name
    string Shop_Owner_Last_name;
    string Shop_Owner_CNIC;
    string Shop_Owner_Address;

public:
    TotalIncome &totalIncome = TotalIncome::getInstance();
    Report ForAccount;
    Employ *shopsEmployee;  // Aggregation pointer of Employ class 
    Shops(Employ *shopsEmployee)  // passing pointer of employ class in constructor of shops class 
    {
        this->shopsEmployee = shopsEmployee;
    }

    Shops()  // default constructor 
    {
        Shop_Id_No = "";
        Shop_Owner_Name = "";
        Shop_Rent = 0;
        Shop_Type = "";
        Shop_Location = "";
        Shop_Owner_First_name = "";
        Shop_Owner_Last_name = "";
        Shop_Owner_CNIC = "";
        Shop_Owner_Address = "";
    }
    ~Shops() {}
    void add_shop_Data()
    {
        system("clear");
        cout << "........Welcome To Adding Shops Data........\n";
        ofstream outfile("SHOPS_DETAILS.txt", ios::app);
        function_Taking_shops();
        string storing;
        int k = 0;
        ifstream infile("SHOPS_DETAILS.txt");
        if (infile.is_open())
        {
            while (getline(infile, storing))
            {
                if (storing.find(Shop_Id_No) != string::npos)
                {
                    k = 1;
                }
            }
        }
        if (k != 1)
        {
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
        }
        else
        {
            cout << "\nSorry This Shop Id Is Already Booked!\n";
        }
        outfile.close();
    }

    // input data for shops from user 
    void function_Taking_shops()
    {

        cin.ignore();
        cout << "Enter Shop No: ";
        getline(cin, Shop_Id_No); // input from user till next line in shop id_no 
        cout << "Enter Shop Owner Name :";
        getline(cin, Shop_Owner_Name);  // input shop owner name 
        cout << "Enter Rent Of Shop :";
        cin >> Shop_Rent;   // input rent 
        totalIncome.AddShopTotalIncome(Shop_Rent);    // calling totalincome singleton instance addShoptotalincome func
        totalIncome.addShopIncome(Shop_Rent);  
        cin.ignore();
        cout << "Enter Shop Type :";   // input shop type 
        getline(cin, Shop_Type);
        cout << "Enter Shop Floor Location :";  // input shop floor location 
        getline(cin, Shop_Location);
    }

    // shop owner data function 
    void add_shop_owner_data()
    {
        system("clear");
        cout << ".......Welcome To Adding Shop Owner Data.......\n";
        ofstream outfile("Shop_Owner_Data.txt", ios::app); // openeing file for shop owner data

        cout << "Enter Shop No :";  // shop no 
        cin >> Shop_Id_No;
        outfile << "Shop No :" << Shop_Id_No << endl;  // shop no output to file 
        cout << "Enter Shop Owner First Name :";   // shop owner first name 
        cin >> Shop_Owner_First_name;
        outfile << "Shop Owner First Name :" << Shop_Owner_First_name << endl;  // owner first name  output to file 
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

    // Display particular shop detail 
    void getting_shop_details()
    {
        system("clear");
        cout << "......Welcome To Finding Shop Details.......\n";
        cout << "Enter Shop No :";  // asking user to input shop no 
        string shop_id;
        cin >> shop_id;
        ifstream infile("SHOPS_DETAILS.txt");  // opening shop detail file 
        string detail;
        bool printlines = false;

        // if file not opening 
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
        }

        while (getline(infile, detail))
        {
            if (detail.find(shop_id) != string::npos)  // shop found 
            {
                printlines = true;
                cout << detail << endl;
                for (int i = 0; i < 5; i++)   // display file five lines 
                {
                    if (getline(infile, detail))
                    {
                        cout << detail << endl;
                    }
                }
            }
        }
    }

    // display shop whole detail 

    void getting_whole_shops_details()
    {
        system("clear");
        cout << ".........Find Whole Shops Details Below.........\n";
        ifstream infile("SHOPS_DETAILS.txt");   // opening file in reading mode 
        string stor;
        while (getline(infile, stor))
        {
            cout << stor << endl; // display file data line by line 
        }
    }

    // this function check owner data 

    void check_owner_Date()
    {
        system("clear");
        cout << "........Welcome To Finding Owner Details........\n";
        cout << "Enter Shop No :";  // user must enter shop no 
        string owner_id;
        cin >> owner_id;
        ifstream infile("Shop_Owner_Data.txt"); // opening show owner data file 
        string own;
        if (!infile.is_open())   // if file is not opening 
        {
            cout << "FILE CAN'T BE OPENED";
        }


        while (getline(infile, own))
        {
            if (own.find(owner_id) != string::npos)  // owner of shop id has been find 
            {
                cout << own << endl;
                for (int i = 0; i < 6; i++)
                {
                    if (getline(infile, own))  // display owner data upto 6 lines 
                    {
                        cout << own << endl;
                    }
                }
            }
        }
    }

   // function to replace show owner data 
    void replace_shop_owner()
    {
        system("clear");
        Shops s;
        string ID;
        cout << ".......Welcome To Replacing Shop Owner Repository......\n";
        cout << "Enter Shop Owner Id :";  // input shop id from user 
        cin >> ID;
        ifstream infile("Shop_Owner_Data.txt"); // opening show owner data file 
        ofstream outfile("temporary.txt");  // opening temporary file 

        // fileis not opening 
        if (!infile.is_open())
        {
            cout << "Failed To Open File!" << endl;
            return;
        }
        int i = 0;
        string line;

    
        while (getline(infile, line))
        {
            if (line.find(ID) != string::npos)   // shop owner who has to be replaced has been found in the file 
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

    // displaying shop rent details to user 
    void gettingShopRentDetails()
    {
        system("clear");
        cout << "........Welcome To Finding Shop Details.......\n";
        string shopId;
        cout << "\nEnter A Shop Id :";  // enter shop id 
        cin >> shopId;
        ifstream file("ShopRentDetails.txt"); /// opoening shop detail file 
        string storing;
        while (getline(file, storing))
        {
            if (storing.find(shopId) != string::npos)   // if shop is found 
            {
                cout << storing << endl;  // display particular shop 
                if (getline(file, storing))
                {
                    cout << storing << endl;
                }
            }
        }
    }

    // getting all shop rent detail 
    void gettingAllshopsRentsDetails()
    {
        system("clear");
        cout << "........Welcome To Find Whole Shops Details Below.......\n";
        ifstream file("ShopRentDetails.txt");  // opening shopRentDetails file 

        // file is not opening 
        if (!file.is_open())
        {
            cout << "\nSorry File Does Not Exist!\n";
        }

        // file is openign 
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