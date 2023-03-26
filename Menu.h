#include <iostream>
#include "Manager.h"
using namespace std;
class Menus
{
public:
    int choice;
    int ch;
    Menus()
    {
        ch = 0;
    }
    Manager obj;
    void Menu();
    void HeadMenu();
    void SubManagerMenu();
    void ManageSubManager();
    void MallDetails();
    void AccountManager();
    void MaintenanceManager();
    void AddMaintenanceData();
    void ParkingManager();
    void ShopsManager();
    void WaterManager();
    void SecurityManager();
    void AddSecurityData();
    void ControlAccountManager();
    void ControlMaintenanceManager();
    void ControlParkingManager();
    void ControlShopsManager();
    void ControlSecurityManager();
    void ControlWaterManager();
    void EmployeeDetails();
    void SecurityEmployees();
    void ShopDetails();
    void AccountDetails();
    void ParkingDetails();
    void SecurityDetails();
    void ParkingIncome();
    void ShopsRent();
    void ShopEmployee();
    void MaintenanceDetails();
    void MaintenanceEmployee();
    void WaterDetails();
    void IssuingEmployeePayments();
    void CalculateDepartmentsBudget();
    void CalculateTotalIncome();
    void MaintenanceBudget();
    void WaterBudget();
    void SecurityBudget();
    void AddAccountsData();
    void AccountEmployees();
    void SubManagersReports();
    void MaintenanceManagerReport();
    void SecurityManagerReport();
    void WaterManagerReport();
    void ParkingManagerReport();
    void ShopManagerReport();
    void AccountManagerReport();
};

void Menus::Menu()
{

    while (ch == 0)
    {
        cout << "\n.........Welcome To Mall Mangement System.........\n\n";
        cout << "Select Your Status :\n"
                "1)Head\n"
                "2)Sub-Manager\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            HeadMenu();
            break;
        }

        case 2:
        {
            SubManagerMenu();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }

        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
}
void Menus::HeadMenu()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Head Repository.......\n\n"
                "1)Manage Sub-Managers\n"
                "2)Mall Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            ManageSubManager();
            break;
        }
        case 2:
        {
            MallDetails();
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SubManagerMenu()
{
    while (ch == 0)
    {
        cout << "\n........Welcome To Sub-Manager Repository........\n\n"
                "Select Your Status :\n"
                "1)Account Manager\n"
                "2)Maintenance Manager\n"
                "3)Parking Manager\n"
                "4)Shops Manager\n"
                "5)Water Manager\n"
                "6)Security Manager\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            AccountManager();
            break;
        }
        case 2:
        {
            MaintenanceManager();
            break;
        }
        case 3:
        {
            ParkingManager();
            break;
        }
        case 4:
        {
            ShopsManager();
            break;
        }
        case 5:
        {
            WaterManager();
        }
        case 6:
        {
            SecurityManager();
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }

        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ManageSubManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Sub-Mananger Repository...........\n\n";
        cout << "1)Control Account Manager\n"
                "2)Control Maintenance Manager\n"
                "3)Control Parking Manager\n"
                "4)Control Shops Manager\n"
                "5)Control Water Manager\n"
                "6)Control Security Manager\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            ControlAccountManager();
            break;
        }
        case 2:
        {
            ControlMaintenanceManager();
            break;
        }
        case 3:
        {
            ControlParkingManager();
            break;
        }
        case 4:
        {
            ControlShopsManager();
            break;
        }
        case 5:
        {
            ControlWaterManager();
            break;
        }
        case 6:
        {
            ControlSecurityManager();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}

void Menus::MallDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Head Sub Repository.......\n\n"
                "1)Employee Details\n"
                "2)Shop Details\n"
                "3)Account Details\n"
                "4)Parking Details\n"
                "5)Maintenance Details\n"
                "6)Water Details\n"
                "7)Security Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            EmployeeDetails();
            break;
        }
        case 2:
        {
            ShopDetails();
            break;
        }
        case 3:
        {
            AccountDetails();
            break;
        }
        case 4:
        {
            ParkingDetails();
            break;
        }
        case 5:
        {
            MaintenanceDetails();
            break;
        }
        case 6:
        {
            WaterDetails();
            break;
        }
        case 7:
        {
            SecurityDetails();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::AccountManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Account Manager Repository..........\n\n";
        cout << "1)Check Accounts Data\n"
                "2)Add Accounts Data\n"
                "3)Account Employees\n"
                "4)Sub-Managers Reports\n"
                "5)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            AccountDetails();
            break;
        }
        case 2:
        {
            AddAccountsData();
            break;
        }
        case 3:
        {
            AccountEmployees();
            break;
        }
        case 4:
        {
            SubManagersReports();
            break;
        }
        case 5:
        {
            AccountManagerReport();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}

void Menus::AddAccountsData()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Adding Account Data Manager Repositiry.........\n\n";
        cout << "1)Issuing Employee Payments \n"
                "2)Calculate Departments Budget\n"
                "3)Calculate Total Income\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            IssuingEmployeePayments();
            break;
        }
        case 2:
        {
            CalculateDepartmentsBudget();
            break;
        }
        case 3:
        {
            CalculateTotalIncome();

            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::CalculateTotalIncome()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Calculate Total Income Repositiry.........\n\n";
        cout << "1)Shops Rent\n"
                "2)Parking Income\n"
                "3)Total Income\n" // this is a calculation after calculating total in come
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            ShopsRent();
            break;
        }
        case 2:
        {
            ParkingIncome();
            break;
        }
        case 3:
        {
            // write a code for showing the main account details
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ParkingIncome()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Parking Income Repositiry.........\n\n";
        cout << "1)Check Daliy Parking Income\n"
                "2)Total Month Income\n"
                "3)Add Income To Main Account\n"
                "4)Accout Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for showing the daliy income of the parking
            break;
        }
        case 2:
        {
            // write a code for total month income
            break;
        }
        case 3:
        {
            // write a code for adding total income into the main account
            break;
        }
        case 4:
        {
            // write a code for checking the current amount in the account
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ShopsRent()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Shops Rent Repositiry.........\n\n";
        cout << "1)Check Shop Rent By Id\n"
                "2)All Shops Rent\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for checking the rent of shop by its id
            break;
        }
        case 2:
        {
            // write a code for showing the whole shops rent and also show those shop those dose not give the rent
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::MaintenanceManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Maintenance Manager Repository..........\n\n";
        cout << "1)Maintenance Data\n"
                "2)Add Maintenance Data\n"
                "3)Maintenance Employees\n"
                "4)Budget\n"
                "5)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            MaintenanceDetails();
            break;
        }
        case 2:
        {
            AddMaintenanceData();
            break;
        }
        case 3:
        {
            MaintenanceEmployee();
            break;
        }
        case 4:
        {
            MaintenanceBudget();
            break;
        }
        case 5:
        {
            MaintenanceManagerReport();
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}

void Menus::AddMaintenanceData() // write a code for this repository just reminder for you kifayat Don't for get this
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Add Maintenance Data Repository.......\n\n"
                "Enter Details :\n"
                "1)Electricity Resources\n"
                "2)Building Repears\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            break;
        }
        case 2:
        {
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::MaintenanceEmployee()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Maintenance Employee Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for adding employee
            break;
        }
        case 2:
        {
            // write a code for removing employee
            break;
        }
        case 3:
        {
            // write a code for replacing employee
            break;
        }
        case 4:
        {
            // write a code for total employee details
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SecurityManager()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Security Manager Repository.......\n\n"
                "Enter Details:\n"
                "1)Security Guards\n"
                "2)Security Cameras\n"
                "3)Emergency Escap Room Location\n"
                "4)Control Room Location\n"
                "5)Security Weapons\n"
                "6)Report\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code of details of security guards
            break;
        }
        case 2:
        {
            // write a code of details of security cameras
            break;
        }
        case 3:
        {
            // write a code for emergency escap room location
            break;
        }
        case 4:
        {
            // write a code for control room location
            break;
        }
        case 5:
        {
            // write a code for the details of security weapons
            break;
        }
        case 6:
        {
            SecurityManagerReport();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::AddSecurityData()
{

    while (ch == 0)
    {
        cout << "\n..........Welcome To Security Manager Repository..........\n\n";
        cout << "1)Add Details Of Security Guards"
                "2)Add Details Of Security Cameras"
                "3)Add Details Of Emergency Escap Room Location"
                "4)Add Details Of Control Room Location"
                "5)Add Details Of Security Weapons"
                "0)Exit"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for adding details of security guards
            break;
        }
        case 2:
        {
            // write a code for adding details of security cameras
            break;
        }
        case 3:
        {
            // write a code for adding the escap room location
            break;
        }
        case 4:
        {
            // write a code for adding details of control room location
            break;
        }
        case 5:
        {
            // write a code for adding Details Of Security Weapons
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SecurityEmployees()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Security Employee Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Total Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for adding employee
            break;
        }
        case 2:
        {
            // write a code for removing employee
            break;
        }
        case 3:
        {
            // write a code for replacing employee
            break;
        }
        case 4:
        {
            // write a code for total employee details
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ParkingManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Parking Manager Repository..........\n\n";
        cout << "1)Check Parking Data\n"
                "2)Add Parking Data\n"
                "3)Parking Employees\n"
                "4)Report\n"
                // hopefully here will be one more option for the report of the parking manager
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            ParkingDetails();
            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Add Parking Data Repository.......\n\n"
                        "1)Vehicle Entry \n"
                        "2)Vehicle Disentry\n"
                        "3)Enter Available Parking Space\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for car entry

                    break;
                }
                case 2:
                {
                    // write a code for car disentry
                    break;
                }
                case 3:
                {
                    // write a code for available space
                    break;
                }

                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Parking Employee Repository.......\n\n"
                        "1)Add Employee\n"
                        "2)Remove Employee\n"
                        "3)Replace Employee\n"
                        "4)Total Employee Details\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for adding employee
                    break;
                }
                case 2:
                {
                    // write a code for removing employee
                    break;
                }
                case 3:
                {
                    // write a code for replacing employee
                    break;
                }
                case 4:
                {
                    // write a code for total employee details
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {
            ParkingManagerReport();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ShopsManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Shop Manager Repository..........\n\n";
        cout << "1)Check Shops Data\n"
                "2)Check Honour Data\n"
                "3)Add Shops Data\n"
                "4)Add Shop Honour\n"
                "5)Repalce Shop Honour\n"
                "6)Shops Employees\n"
                "7)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            ShopDetails();
            break;
        }
        case 2:
        {
            // write a code for checking a shop honour
            break;
        }
        case 3:
        {
            // write a code for regestring shop
            break;
        }
        case 4:
        {
            // write a code for adding a chop honour
            break;
        }
        case 5:
        {
            // write a code for replacing shop honour
            break;
        }

        case 6:
        {
            ShopEmployee();
            break;
        }
        case 7:
        {
            ShopManagerReport();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ShopEmployee()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Shops Employee Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Total Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for adding employee
            break;
        }
        case 2:
        {
            // write a code for removing employee
            break;
        }
        case 3:
        {
            // write a code for replacing employee
            break;
        }
        case 4:
        {
            // write a code for total employee details
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::WaterManager()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Water Manager Repository..........\n\n";
        cout << "1)Check Water Details\n"
                "2)Add Water Details\n"
                "3)Water Employees\n"
                "4)Budget\n"
                "5)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            WaterDetails();
            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Add Water Details Repository.......\n\n";
                cout << "Enter the Details :\n"
                        "1)Pluming Issues\n"
                        "2)Water Resources\n"
                        "3)Water Providing authority\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for writting the plumbing issues details
                    break;
                }
                case 2:
                {
                    // write a code for writting water resources details
                    break;
                }
                case 3:
                {
                    // write a code for writting water providing authority details
                    break;
                }

                default:
                    break;
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Water Employee Repository.......\n\n"
                        "1)Add Employee\n"
                        "2)Remove Employee\n"
                        "3)Replace Employee\n"
                        "4)Total Employee Details\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for adding employee
                    break;
                }
                case 2:
                {
                    // write a code for removing employee
                    break;
                }
                case 3:
                {
                    // write a code for replacing employee
                    break;
                }
                case 4:
                {
                    // write a code for total employee details
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
        case 4:
        {
            WaterBudget();
            break;
        }
        case 5:
        {
            WaterManagerReport();
            break;
        }
            ch = 0;
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlAccountManager()
{
    while (ch == 0)
    {

        cout << "\n.......Welcome To Control Account Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.AccountManager;
            obj.AccountManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.AccountManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.AccountManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.AccountManager.Display_Data("Manager");
            break;
        }
        case 5:
        {

            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlSecurityManager()
{
    while (ch == 0)
    {

        cout << "\n.......Welcome To Control Security Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.SecurityManager;
            obj.SecurityManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.SecurityManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.SecurityManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.SecurityManager.Display_Data("Manager");
            break;
        }
        case 5:
        {
            // writing a code for head reading the report of the manager
            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlWaterManager()
{
    while (ch == 0)
    {

        cout << "\n.......Welcome To Control Water Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.WaterManager;
            obj.WaterManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.WaterManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.WaterManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.WaterManager.Display_Data("Manager");
            break;
        }
        case 5:
        {
            // writing a code for head reading the report of the manager
            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlMaintenanceManager()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Control Maintenance Manager Repository......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.MaintenanceManager;
            obj.MaintenanceManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.MaintenanceManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.MaintenanceManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.MaintenanceManager.Display_Data("Manager");
            break;
        }
        case 5:
        {
            // writing a code for head reading the report of the manager
            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlParkingManager()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Control Parking Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.ParkingManager;
            obj.ParkingManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.ParkingManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.ParkingManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.ParkingManager.Display_Data("Manager");
            break;
        }
        case 5:
        {
            // writing a code for head reading the report of the manager
            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ControlShopsManager()
{
    while (ch == 0)
    {

        cout << "\n.......Welcome To Control Shop Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin >> obj.ShopsManager;
            obj.ShopsManager.input_Date("Manager");
            break;
        }
        case 2:
        {
            obj.ShopsManager.Remove_Employee("Manager");
            break;
        }
        case 3:
        {
            obj.ShopsManager.Replace_employ("Manager");
            break;
        }
        case 4:
        {
            obj.ShopsManager.Display_Data("Manager");
            break;
        }
        case 5:
        {
            // writing a code for head reading the report of the manager
            break;
        }
        case 6:
        {
            // write a code for head responsing to the manager
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::EmployeeDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Employee Details Repository.......\n\n"
                "1)Account Employee Details\n"
                "2)Shop Employee Details\n"
                "3)Maintenance Employee Details\n"
                "4)Parking Employee Details\n"
                "5)Water Employee Details\n"
                "6)Security Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Accounts Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }
                
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;

            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Shop Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }
               
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Maintenance Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Parking Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }

                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 5:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Water Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }
                
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 6:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome To Security Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    // write a code for getting data as a whole
                    break;
                }
               
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ShopDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Shop Details Repository.......\n\n"
                "1)Getting Details With Shop ID No \n"
                "2)Getting Details Of Whole Shops\n"
                "3)Getting Details With Shop Owner ID \n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // wirte a code for getting details with shop ID No
            break;
        }
        case 2:
        {
            // write a code for getting details of whole shops
            break;
        }
        case 3:
        {
            // write a code for getting details with shop owner id
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::AccountDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Accounts Details Repository.......\n\n"
                "1)Checking Employee Payment Information \n"
                "2)Reviewing your total earnings\n"
                "3)Examining the department's Financial Plan\n"
                "4)Reviewing your Complete Income Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for employee salary
            break;
        }
        case 2:
        {
            // write a code for total income sources
            break;
        }
        case 3:
        {
            // write a code for department budget
            break;
        }
        case 4:
        {
            // write a code for total profit
            break;
        }
        case 5:
        {
            // write a code for current amount
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ParkingDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Parking Details Repository.......\n\n"
                "1)Reviewing Overall Earnings \n"
                "2)Exploring Available Parking\n"
                "3)Vehicle Details \n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for parking income
            break;
        }
        case 2:
        {
            // write a code for parking cars and other details
            break;
        }
        case 3:
        {
            // write a code for vehicle details by number plate number
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}

void Menus::WaterDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Water Details Repository.......\n\n"
                "Checking Details :\n"
                "1)Pluming Issues\n"
                "2)Water Resources\n"
                "3)Water Providing authority Details\n"

                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code here
            break;
        }
        case 2:
        {
            // write a code here
            break;
        }
        case 3:
        {
            // write a code here
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::MaintenanceDetails()
{ // if any other details is required then we will write at that time
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Maintenance Details Repository.......\n\n"
                "1)Details of Electricity Resources\n"
                "2)Details of Building Repears\n"
                "3)Maintenance Report\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            // write a electricity class code for the head whom can only read the details
            break;
        }
        case 2:
        {
            // write a code for details of the building
            break;
        }
        case 3:
        {
            // write a code sfor the report of the maintenance

            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SecurityDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Security Details Repository.......\n\n"
                "1)Getting Details Of Security Guards\n"
                "2)Getting Details Of Security Cameras\n"
                "3)Getting Details Of Emergency Escap Room Location\n"
                "4)Getting Details Of Control Room Location\n"
                "5)Getting Details Of Security Weapons\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code of details of security guards
            break;
        }
        case 2:
        {
            // write a code of details of security cameras
            break;
        }
        case 3:
        {
            // write a code for emergency escap room location
            break;
        }
        case 4:
        {
            // write a code for control room location
            break;
        }
        case 5:
        {
            // write a code for the details of security weapons
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::IssuingEmployeePayments()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Issuing Employee Payments Repository.........\n\n";
        cout << "1)Payment Processing\n"
                "2)Payment History\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Payment Processing Repository.........\n\n";
                cout << "1)Process Payments\n"
                        "2)Review Payment Details\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for processing payments of each employee by giving id first it gives his details then pay him
                    break;
                }
                case 2:
                {
                    // write a code for review the payment of the employee is done or not by his or her id code
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Payment History Repository.........\n\n";
                cout << "1)View Payment History\n"
                        "2)Search Payment History\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write code for viewing the payment history of the hole mall employee by his payment history
                    break;
                }
                case 2:
                {
                    // checking the history of payment by id of a person
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::CalculateDepartmentsBudget()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Calculate Department Budget Repository.........\n\n";
        cout << "1)Check Maintenance Budget\n"
                "2)Check Water Budget\n"
                "3)Check Security Budget\n"
                "4)Check Total Depatments Budget\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            // write a code for budget
            break;
        }
        case 2:
        {
            // write a code for budget
            break;
        }
        case 3:
        {
            // write a code for budget
            break;
        }
        case 4:
        {
            ////write a code for budget total sum
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::MaintenanceBudget()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Maintenance Budget Repository.........\n\n";
        cout << "1)Generate Maintenance Budget Reports\n"
                "2)Required Budget\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Generate Maintenance Budget Reports Repository.........\n\n";
                // this report is send to the head and account manager for aproval
                cout << "1)Add Report\n"
                        "2)Remove Report\n"
                        "3)Edit Report\n"
                        "4)Replace Report\n"
                        "5)Read Report\n"
                        "6)Approval Status\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for adding report of the budget
                    break;
                }
                case 2:
                {
                    // write a code for removing the already written report
                    break;
                }
                case 3:
                {
                    // write a code for edit the already written report
                    break;
                }
                case 4:
                {
                    // write a code for replacing the report
                    break;
                }
                case 5:
                {
                    // write code for reading reports
                }
                case 6:
                {
                    // write a code for approval status from accounts manager
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 2:
        {
            // write a code for required budget
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::WaterBudget()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Water Budget Repository.........\n\n";
        cout << "1)Generate Water Budget Reports\n"
                "2)Required Budget\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Generate Water Budget Reports Repository.........\n\n";
                // this report is send to the head and account manager for aproval
                cout << "1)Add Report\n"
                        "2)Remove Report\n"
                        "3)Edit Report\n"
                        "4)Replace Report\n"
                        "5)Approval Status\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for adding report of the budget
                    break;
                }
                case 2:
                {
                    // write a code for removing the already written report
                    break;
                }
                case 3:
                {
                    // write a code for edit the already written report
                    break;
                }
                case 4:
                {
                    // write a code for replacing the report
                    break;
                }
                case 5:
                {
                    // write a code for approval status from accounts manager
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 2:
        {
            // write a code for  required budget
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SecurityBudget()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Security Budget Repository.........\n\n";
        cout << "1)Generate Security Budget Reports\n"
                "2)Required Budget\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Generate Security Budget Reports Repository.........\n\n";
                // this report is send to the head and account manager for aproval
                cout << "1)Add Report\n"
                        "2)Remove Report\n"
                        "3)Edit Report\n"
                        "4)Replace Report\n"
                        "5)Approval Status\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for adding report of the budget
                    break;
                }
                case 2:
                {
                    // write a code for removing the already written report
                    break;
                }
                case 3:
                {
                    // write a code for edit the already written report
                    break;
                }
                case 4:
                {
                    // write a code for replacing the report
                    break;
                }
                case 5:
                {
                    // write a code for approval status from accounts manager
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 2:
        {
            // write a code for required budget
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SubManagersReports()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Sub-Manager Reports Repository.........\n\n";
        cout << "1)Maintenance Manager\n"
                "2)Secutity Manager \n"
                "3)Water Manager\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Maintenance Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for reading a report or message which send from the side of maintenance manager from head
                    break;
                }
                case 2:
                {
                    // write a code for giving a response or send any message to the maintenace manager from head
                    break;
                }
                case 3:
                {
                    // write a code for giving approval or rejection to the report
                    break;
                }
                case 4:
                {
                    // write a code for checking the approval status of report and and checking the name of aproval person also
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Security Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for reading a report or message which send from the side of Security manager from account manager
                    break;
                }
                case 2:
                {
                    // write a code for giving a response or send any message to the Security manager from account manager
                    break;
                }
                case 3:
                {
                    // write a code for giving approval or rejection to the report
                    break;
                }
                case 4:
                {
                    // write a code for checking the approval status of report and and checking the name of aproval person also
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cout << "\n..........Welcome To Water Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    // write a code for reading a report or message which send from the side of Water manager from head
                    break;
                }
                case 2:
                {
                    // write a code for giving a response or send any message to the Water manager from head
                    break;
                }
                case 3:
                {
                    // write a code for giving approval or rejection to the report
                    break;
                }
                case 4:
                {
                    // write a code for checking the approval status of report and and checking the name of aproval person also
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    cout << "\nInvalid Choice!\n";
                    break;
                }
                }
            }
            ch = 0;
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::AccountEmployees()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Account Employees Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Total Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // write a code for adding employee
            break;
        }
        case 2:
        {
            // write a code for removing employee
            break;
        }
        case 3:
        {
            // write a code for replacing employee
            break;
        }
        case 4:
        {
            // write a code for total employee details
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::MaintenanceManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Maintenance Manager Reports Repository.........\n\n";
        cout << "1)Write Or Edit Report\n"
                "2)Read Report Or Message\n"
                "3)Replace Report\n"
                "4)Report Approval Status\n"
                "5)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            obj.MaintenanceManager.Add_report("MaintenanceManagerReport") ;
            break;
        }
        case 2:
        {
            // write a code for reading report  which has written by himself
            break;
        }
        case 3:
        {
            // write a code for replacing the report
            break;
        }
        case 4:
        {
            // write a code for giving approval or rejection to the report

            break;
        }
        case 5:
        {
            // write a code for reading the head or account manager response
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::SecurityManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Security Manager Reports Repository.........\n\n";
        cout << "1)Write Or Edit Report\n"
                "2)Read Report Or Message\n"
                "3)Replace Report\n"
                "4)Report Approval Status\n"
                "5)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            break;
        }
        case 2:
        {
            // write a code for reading report  which has written by himself
            break;
        }
        case 3:
        {
            // write a code for replacing the report
            break;
        }
        case 4:
        {
            // write a code for giving approval or rejection to the report

            break;
        }
        case 5:
        {
            // write a code for reading the head or account manager response
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::WaterManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Water Manager Reports Repository.........\n\n";
        cout << "1)Write Or Edit Report\n"
                "2)Read Report Or Message\n"
                "3)Replace Report\n"
                "4)Report Approval Status\n"
                "5)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            break;
        }
        case 2:
        {
            // write a code for reading report  which has written by himself
            break;
        }
        case 3:
        {
            // write a code for replacing the report
            break;
        }
        case 4:
        {
            // write a code for giving approval or rejection to the report

            break;
        }
        case 5:
        {
            // write a code for reading the head or account manager response
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ParkingManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Parking Manager Reports Repository.........\n\n";
        cout << "1)Write Or Edit Report\n"
                "2)Read Report Or Message\n"
                "3)Replace Report\n"
                "4)Report Approval Status\n"
                "5)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            break;
        }
        case 2:
        {
            // write a code for reading report  which has written by himself
            break;
        }
        case 3:
        {
            // write a code for replacing the report
            break;
        }
        case 4:
        {
            // write a code for giving approval or rejection to the report

            break;
        }
        case 5:
        {
            // write a code for reading the head or account manager response
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::ShopManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Shop Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Report Approval Status\n"
                "6)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            obj.ShopsManager.Add_report("ShopsReport");
            break;
        }
        case 2:
        {
            obj.ShopsManager.Edit_report("ShopsReport");
            break;
        }
        case 3:
        {
            // write a code for reading report  which has written by himself
            obj.ShopsManager.ReadReport("ShopsReport");
            break;
        }
        case 4:
        {
            // write a code for replacing the report
            obj.ShopsManager.Add_report("ShopsReport");

            break;
        }
        case 5:
        {
            // write a code for giving approval or rejection to the report
            obj.ShopsManager.ReportsStatus();
        }
        case 6:
        {
            // write a code for reading the head or account manager response
            obj.ShopsManager.ReadResponse("ResponseToShopReport");

            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}
void Menus::AccountManagerReport()
{
    while (ch == 0)
    {
        cout << "\n..........Welcome To Account Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Report Approval Status\n"
                "6)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head
            obj.AccountManager.Add_report("AccountReport");
            break;
        }
        case 2:
        {
            obj.AccountManager.Edit_report("AccountReport");
        }
        case 3:
        {
            // write a code for reading report  which has written by himself
            obj.AccountManager.ReadReport("AccountReport");
        }
        case 4:
        {
            // write a code for replacing the report
            obj.AccountManager.Add_report("AccountReport");
            break;
        }
        case 5:
        {
            obj.AccountManager.ReportsStatus();
            // write a code for giving approval or rejection to the report

            break;
        }
        case 6:
        {
            // write a code for reading the head or account manager response
            obj.AccountManager.ReadResponse("ResponseToAccountReport");
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice!\n";
            break;
        }
        }
    }
    ch = 0;
}