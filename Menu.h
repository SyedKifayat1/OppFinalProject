#include <iostream>
#include <stdexcept>
#include "Manager.h"
#include "calculator.h"
#include "Employee.h"
using namespace std;
class Menus
{
public:
    int choice;
    string choice1;
    int ch;
    int check;
    Menus()
    {
        check = 0;
        ch = 0;
    }
    TotalIncome &totalIncome = TotalIncome::getInstance();
    Manager obj;
    Accounts<long double> account;
    Employ *employee = new Employ();
    Maintaineance *maintaineance = new Maintaineance(employee);
    Parking *parking = new Parking(employee);
    Shops *shop = new Shops(employee);

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
    void ControlAccountManager();
    void ControlMaintenanceManager();
    void ControlParkingManager();
    void ControlShopsManager();
    void EmployeeDetails();
    void ShopDetails();
    void AccountDetails();
    void ParkingDetails();
    void ShopsRent();
    void MaintenanceDetails();
    void MaintenanceEmployee();
    void IssuingEmployeePayments();
    void CalculateTotalIncome();
    void MaintenanceBudget();
    void AddAccountsData();
    void AccountEmployees();
    void SubManagersReports();
    void MaintenanceManagerReport();
    void ParkingManagerReport();
    void ShopManagerReport();
    void AccountManagerReport();
    void calculator();
    int InvaidChoice();
    void PaymentProcessing();
    void PaymentHistory();
    void add_Electicity_Details();
    void BuildingRequirements();
};
int Menus::InvaidChoice()
{

    int num;

    try
    {

        // Try to convert input to integer
        num = stoi(choice1);

        // Check if input is an integer
        if (to_string(num) != choice1)
        {
            throw invalid_argument("");
        }
    }
    catch (invalid_argument const &e)
    {
        cerr << "\nError: Please Enter An Integer Number\n";
        return -19;
    }

    return num;
}

void Menus::Menu()
{

        totalIncome.restoreAccountsData();
    while (ch == 0)
    {

        system("clear");
        // cin.get();
        cout << "\n.........Welcome To Mall Mangement System.........\n\n";
        cout << "Select Your Status :\n"
                "1)Head\n"
                "2)Sub-Manager\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();

        {

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
                if (choice != -19)
                    cout << "\nInvalid Choice!\n";
                break;
            }
            }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
        cin.ignore();
    }
}
void Menus::HeadMenu()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Head Repository.......\n\n"
                "1)Manage Sub-Managers\n"
                "2)Mall Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::SubManagerMenu()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n........Welcome To Sub-Manager Repository........\n\n"
                "Select Your Status :\n"
                "1)Account Manager\n"
                "2)Maintenance Manager\n"
                "3)Parking Manager\n"
                "4)Shops Manager\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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

        case 0:
        {
            ch = 1;
            break;
        }

        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ManageSubManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Sub-Mananger Repository...........\n\n";
        cout << "1)Control Account Manager\n"
                "2)Control Maintenance Manager\n"
                "3)Control Parking Manager\n"
                "4)Control Shops Manager\n"

                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::MallDetails()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Head Sub Repository.......\n\n"
                "1)Employee Details\n"
                "2)Shop Details\n"
                "3)Account Details\n"
                "4)Parking Details\n"
                "5)Maintenance Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::AccountManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Account Manager Repository..........\n\n";
        cout << "1)Check Accounts Data\n"
                "2)Add Accounts Data\n"
                "3)Account Employees\n"
                "4)Sub-Managers Reports\n"
                "5)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::AddAccountsData()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Adding Account Data Manager Repository.........\n\n";
        cout << "1)Issuing Employee Payments \n"
                "2)Calculate Total Income\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            IssuingEmployeePayments();
            break;
        }
        case 2:
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::CalculateTotalIncome()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Calculate Total Income Repositiry.........\n\n";
        cout << "1)Shops \n"
                "2)Parking Income\n"
                "3)Total Income\n" // this is a calculation after calculating total in come
                "4)Calculator\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            ShopsRent();
            break;
        }
        case 2:
        {
            // ParkingIncome();
            cout << "\nTotal Parking Income Is :" << obj.AccountManager.totalIncome.getParkingIncome() << endl;
            break;
        }
        case 3:
        {
            // write a code for showing the main account details
            cout << "\nMall Total Income Is :" << obj.AccountManager.totalIncome.getTotalIncome() << endl;
            break;
        }
        case 4:
        {
            calculator();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::ShopsRent()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Shops Rent Repositiry.........\n\n";
        cout << "1)Check Shop Rent By Id\n"
                "2)All Shops Rent\n"
                "3)Total Shops Income\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            // write a code for checking the rent of shop by its id
            obj.ShopsManager.gettingShopRentDetails();
            break;
        }
        case 2:
        {
            // write a code for showing the whole shops rent and also show those shop those dose not give the rent
            obj.ShopsManager.gettingAllshopsRentsDetails();
            break;
        }
        case 3:
        {
            long double shop = obj.AccountManager.totalIncome.getShopIncome();
            cout << "\nShops Total Income Is :" << shop << endl;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::MaintenanceManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Maintenance Manager Repository..........\n\n";
        cout << "1)Add And Read Maintenance Data\n"
                "2)Maintenance Employees\n"
                "3)Budget\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        
        case 1:
        {
            AddMaintenanceData();
            break;
        }
        case 2:
        {
            MaintenanceEmployee();
            break;
        }
        case 3:
        {
            MaintenanceBudget();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::AddMaintenanceData()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Adding And Reading Maintenance Data Repository.......\n\n"
                "Add And Read Details :\n"
                "1)Electricity Resources\n"
                "2)Building Requirements \n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            add_Electicity_Details();
            break;
        }
        case 2:
        {
            BuildingRequirements();
            break;
        }
        case 0:
            ch = 1;
            break;
        default:
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::BuildingRequirements()
{

}
void Menus::add_Electicity_Details()
{

    obj.MaintenanceManager.read_all_records_file();
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n........Welcome To Adding Electicity Details........\n\n";
        cout << "1)Add A Record\n2)Modify Record\n3)Print Records\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            obj.MaintenanceManager.add_single_electricity_record(obj.MaintenanceManager.get_current_Records());

            break;
        }
        case 2:
        {
            obj.MaintenanceManager.modify_record_file();
            break;
        }
        case 3:
        {
            obj.MaintenanceManager.print_all_records();
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Chocie!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::MaintenanceEmployee()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Maintenance Employee Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            maintaineance->maintaineanceEmployee->input_Data("MaintenanceEmployee");

            break;
        }
        case 2:
        {
            maintaineance->Remove_Employee("MaintenanceEmployee");
            // write a code for removing employee
            break;
        }
        case 3:
        {
            maintaineance->Replace_employ("MaintenanceEmployee");
            // write a code for replacing employee
            break;
        }
        case 4:
        {
            maintaineance->maintaineanceEmployee->Total_employee_Details("MaintenanceEmployee");
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ParkingManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Parking Manager Repository..........\n\n";
        cout << "1)Check Parking Data\n"
                "2)Add Parking Data\n"
                "3)Parking Employees\n"
                "4)Report\n"
                // hopefully here will be one more option for the report of the parking manager
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
                cin.ignore();
                system("clear");

                cout << "\n.......Welcome To Add Parking Data Repository.......\n\n"
                        "1)Enter Available Parking Space \n"
                        "2)Vehicle entry\n"
                        "3)Vehicle Disentry\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    parking->set_available_parking(); // vehicle entry
                    break;
                }
                case 2:
                {
                    parking->Vehicle_entry(); // vehicle disentry
                    // write a code for car disentry
                    break;
                }
                case 3:
                {
                    parking->Vehicle_Disentry();
                    // write a code )for available space
                    break;
                }

                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.......Welcome To Parking Employee Repository.......\n\n"
                        "1)Add Employee\n"
                        "2)Remove Employee\n"
                        "3)Replace Employee\n"
                        "4)Total Employee Details\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    parking->parkingEmployee->input_Data("ParkingEmployee");
                    // write a code for adding employee
                    break;
                }
                case 2:
                {
                    parking->Remove_Employee("ParkingEmployee");
                    // write a code for removing employee
                    break;
                }
                case 3:
                {
                    parking->Replace_employ("ParkingEmployee");
                    // write a code for replacing employee
                    break;
                }
                case 4:
                {
                    parking->parkingEmployee->Total_employee_Details("ParkingEmployee");
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
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ShopsManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Shop Manager Repository..........\n\n";
        cout << "1)Check Shops Data\n"
                "2)Check Owner Data\n"
                "3)Add Shops Data\n"
                "4)Add Shop Owner\n"
                "5)Repalce Shop Owner\n"
                "6)Report\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            ShopDetails();
            break;
        }
        case 2:
        {
            shop->check_owner_Date();
            break;
        }
        case 3:
        {
            // shop->function_Taking_shops();
            shop->add_shop_Data();
            // write a code for regestring shop
            break;
        }
        case 4:
        {
            shop->add_shop_owner_data();
            // write a code for adding a chop honour
            break;
        }
        case 5:
        {
            shop->replace_shop_owner();
            // write a code for replacing shop honour
            break;
        }
        case 6:
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::ControlAccountManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");

        cout << "\n.......Welcome To Control Account Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "7)Report Approval\n"
                "8)Check Status\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            obj.AccountManager.ReadReport("AccountReport");
            break;
        }
        case 6:

        {
            obj.AccountManager.WriteResponse("ResponseToAccountReport");
            break;
        }
        case 7:
        {

            cout << "\nGive Your Responce :\n";
            obj.AccountManager.ReadReport("AccountReport");
            cout << endl;
            cout << "Select Your Choice :\n"
                    "1)Approved\n"
                    "2)Reject\n"
                    "Your Option :";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                obj.AccountManager.ReportStatus = true;
                if (obj.AccountManager.ReportStatus == true)
                {
                    cout << "\nYou Can Approved The Report.....\n";
                }
                break;
            }
            case 2:
            {
                obj.AccountManager.ReportStatus = false;
                if (obj.AccountManager.ReportStatus == false)
                {
                    cout << "\nYou Can Reject The Report!\n";
                }
                break;
            }
            default:
            {
                cout << "\nInvalid Choice!\n";
                break;
            }
            }
        }
        case 8:
        {
            obj.AccountManager.ReportsStatus();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::ControlMaintenanceManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Control Maintenance Manager Repository......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "7)Report Approval\n"
                "8)Check Status\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            obj.MaintenanceManager.ReadReport("MaintenanceReportForHead");
            break;
        }
        case 6:

        {
            obj.MaintenanceManager.WriteResponse("HeadResponceToMaintenanceReport");
            break;
        }
        case 7:
        {
            cout << "\nGive Your Responce :\n";
            obj.MaintenanceManager.ReadReport("MaintenanceReportForHead");
            cout << endl;
            cout << "Select Your Choice :\n"
                    "1)Approved\n"
                    "2)Reject\n"
                    "Your Option :";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                obj.MaintenanceManager.ReportStatus = true;
                if (obj.MaintenanceManager.ReportStatus == true)
                {
                    cout << "\nYou Can Approved The Report.....\n";
                }
                break;
            }
            case 2:
            {
                obj.MaintenanceManager.ReportStatus = false;
                if (obj.MaintenanceManager.ReportStatus == false)
                {
                    cout << "\nYou Can Reject The Report!\n";
                }
                break;
            }
            default:
                cout << "\nInvalid Choice!\n";
                break;
            }
            break;
        }
        case 8:
        {
            obj.MaintenanceManager.ReportsStatus();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ControlParkingManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Control Parking Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "7)Report Approval\n"
                "8)Check Status\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            obj.ParkingManager.ReadReport("ParkingReportForHead");
            break;
        }
        case 6:

        {
            obj.ParkingManager.WriteResponse("HeadResponceToParkingReport");
            break;
        }
        case 7:
        {
            cout << "\nGive Your Responce :\n";
            obj.ParkingManager.ReadReport("ParkingReportForHead");
            cout << endl;
            cout << "Select Your Choice :\n"
                    "1)Approved\n"
                    "2)Reject\n"
                    "Your Option :";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                obj.ParkingManager.ReportStatus = true;
                if (obj.ParkingManager.ReportStatus == true)
                {
                    cout << "\nYou Can Approved The Report.....\n";
                }
                break;
            }
            case 2:
            {
                obj.ParkingManager.ReportStatus = false;
                if (obj.ParkingManager.ReportStatus == false)
                {
                    cout << "\nYou Can Reject The Report!\n";
                }
                break;
            }
            default:
                cout << "\nInvalid Choice!\n";
                break;
            }
            break;
        }
        case 8:
        {
            obj.ParkingManager.ReportsStatus();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ControlShopsManager()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Control Shop Manager Repository.......\n\n"
                "1)Add Manager\n"
                "2)Remove Manager\n"
                "3)Replace Manager\n"
                "4)Show Manager\n"
                "5)Report\n"
                "6)Responce\n"
                "7)Report Approval\n"
                "8)Check Status\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            obj.ShopsManager.ReadReport("ShopReportForHead");
            break;
        }
        case 6:

        {
            obj.ShopsManager.WriteResponse("HeadResponceToShopReport");
            break;
        }
        case 7:
        {
            cout << "\nGive Your Responce :\n";
            obj.ShopsManager.ReadReport("ShopReportForHead");
            cout << endl;
            cout << "Select Your Choice :\n"
                    "1)Approved\n"
                    "2)Reject\n"
                    "Your Option :";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                obj.ShopsManager.ReportStatus = true;
                if (obj.ShopsManager.ReportStatus == true)
                {
                    cout << "\nYou Can Approved The Report.....\n";
                }
                break;
            }
            case 2:
            {
                obj.ShopsManager.ReportStatus = false;
                if (obj.ShopsManager.ReportStatus == false)
                {
                    cout << "\nYou Can Reject The Report!\n";
                }
                break;
            }
            default:
                cout << "\nInvalid Choice!\n";
                break;
            }
            break;
        }
        case 8:
        {
            obj.ShopsManager.ReportsStatus();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::EmployeeDetails()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Employee Details Repository.......\n\n"
                "1)Account Employee Details\n"
                "2)Shop Employee Details\n"
                "3)Maintenance Employee Details\n"
                "4)Parking Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.......Welcome To Accounts Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    account.Display_Data("AccountEmployee");
                    break;
                }
                case 2:
                {
                    account.accountEmployee.Total_employee_Details("AccountEmployee");
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
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 2:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.......Welcome To Shop Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    shop->Display_Data("ShopsEmployee");
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    shop->shopsEmployee->Total_employee_Details("ShopsEmployee");
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
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.......Welcome To Maintenance Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    maintaineance->Display_Data("MaintenanceEmployee");
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    maintaineance->maintaineanceEmployee->Total_employee_Details("MaintenanceEmployee");
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
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.......Welcome To Parking Employee Details Repository.......\n\n"
                        "1)Getting Data By ID No \n"
                        "2)Getting Data As A Whole\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    parking->Display_Data("ParkingEmployee");
                    // wirte a code for getting data with ID No
                    break;
                }
                case 2:
                {
                    parking->parkingEmployee->Total_employee_Details("ParkingEmployee");
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
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ShopDetails()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Checking Shop Details Repository.......\n\n"
                "1)Getting Details With Shop ID No \n"
                "2)Getting Details Of Whole Shops\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            shop->getting_shop_details();
            // wirte a code for getting details with shop ID No
            break;
        }
        case 2:
        {
            shop->getting_whole_shops_details();
            // write a code for getting details of whole shops
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::AccountDetails()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Checking Accounts Details Repository.......\n\n"
                "1)Checking Employee Payment Information \n"
                "2)Reviewing your total earnings\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            // write a code for employee salary

            break;
        }
        case 2:
        {
            long double shop = obj.AccountManager.totalIncome.getShopIncome();
            long double parking = obj.AccountManager.totalIncome.getParkingIncome();
            long double current = obj.AccountManager.totalIncome.getTotalIncome();
            // write a code for total income sources
            cout << "\nTotal Income Sources :\n";
            cout << "\nShops Income :" << shop;
            cout << "\nParking Income :" << parking;
            cout << "\nTotal Income :" << shop + parking;
            cout << "\nCurrent Balance :" << current;
            cout << "\nProfit :" << (current / (shop + parking)) * 100 << "%" << endl;
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ParkingDetails()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Checking Parking Details Repository.......\n\n"
                "1)Reviewing Overall Earnings \n"
                "2)Exploring Available Parking\n"
                "3)Vehicle Details \n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {

            long double parking = obj.AccountManager.totalIncome.getParkingIncome();
            cout << "Parking Total Income Is :" << parking << endl;
            break;
        }
        case 2:
        {
            cout << parking->getavailable_parking_space();
            // write a code for parking cars and other details
            break;
        }
        case 3:
        {
            parking->vehicle_details();
            // write a code for vehicle details by number plate number
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::MaintenanceDetails()
{ // if any other details is required then we will write at that time
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Checking Maintenance Details Repository.......\n\n"
                "1)Details of Electricity Resources\n"
                "2)Details of Building Repears\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {

            // write a electricity class code for the head whom can only read the details
            obj.MaintenanceManager.print_all_records();

            break;
        }
        case 2:
        {
            // write a code for details of the building
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::PaymentProcessing()
{
    while (ch == 0)
    {
        cin.ignore();
        long double Salary;
        system("clear");
        cout << "\n...........Welcome To Payament Repository..........\n\n";
        cout << "1)Manager Salary\n"
                "2)Account Employee Salary\n"
                "3)Maintenance Employee Salary\n"
                "4)Parking Employee Salary\n"
                "5)Water Employee Salary\n"
                "0)Exit\n"
                "Your Chocie :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            ofstream file("PaidManagersData.txt", ios::app);
            obj.AccountManager.Display_Data("Manager");
            if (obj.AccountManager.check == 1)
            {
                cout << "\nEnter Salary :";
                cin >> Salary;
                if (Salary < obj.AccountManager.totalIncome.getTotalIncome())
                {
                    file << "Emloyee Id :" << obj.AccountManager.user_id << endl;
                    file << "Salary :" << Salary << endl;
                    obj.AccountManager.totalIncome.subtractEmployeeSalary(Salary);
                    cout << "\nNow Current Balance Is :" << obj.AccountManager.totalIncome.getTotalIncome();
                }
                else
                {
                    cout << "\nSorry Low Balance!\n";
                }
            }
            file.close();
            break;
        }
        case 2:
        {
            ofstream file("PaidAccountEmployeeData.txt", ios::app);
            obj.AccountManager.accountEmployee.Display_Data("AccountEmployee");
            if (obj.AccountManager.accountEmployee.check == 1)
            {
                cout << "\nEnter Salary :";
                cin >> Salary;
                if (Salary < obj.AccountManager.totalIncome.getTotalIncome())
                {

                    file << "Emloyee Id :" << obj.AccountManager.accountEmployee.user_id << endl;
                    file << "Salary :" << Salary << endl;
                    obj.AccountManager.totalIncome.subtractEmployeeSalary(Salary);
                    cout << "\nNow Current Balance Is :" << obj.AccountManager.totalIncome.getTotalIncome();
                }
                else
                {
                    cout << "\nSorry Low Balance!\n";
                }
            }
            file.close();
            break;
        }
        case 3:
        {
            ofstream file("PaidMaintenanceEmployeeData.txt", ios::app);
            obj.MaintenanceManager.maintaineanceEmployee->Display_Data("MaintenanceEmployee");
            if (obj.MaintenanceManager.maintaineanceEmployee->check == 1)
            {
                cout << "\nEnter Salary :";
                cin >> Salary;
                if (Salary < obj.AccountManager.totalIncome.getTotalIncome())
                {

                    file << "Emloyee Id :" << obj.MaintenanceManager.maintaineanceEmployee->user_id << endl;
                    file << "Salary :" << Salary << endl;
                    obj.MaintenanceManager.totalIncome.subtractEmployeeSalary(Salary);
                    cout << "\nNow Current Balance Is :" << obj.AccountManager.totalIncome.getTotalIncome();
                }
                else
                {
                    cout << "\nSorry Low Balance!\n";
                }
            }
            file.close();
            break;
        }
        case 4:
        {
            ofstream file("PaidParkingEmployeeData.txt", ios::app);
            obj.ParkingManager.parkingEmployee->Display_Data("ParkingEmployee");
            if (obj.ParkingManager.parkingEmployee->check == 1)
            {
                cout << "\nEnter Salary :";
                cin >> Salary;
                if (Salary < obj.AccountManager.totalIncome.getTotalIncome())
                {

                    file << "Emloyee Id :" << obj.ParkingManager.parkingEmployee->user_id << endl;
                    file << "Salary :" << Salary << endl;
                    obj.ParkingManager.totalIncome.subtractEmployeeSalary(Salary);
                    cout << "\nNow Current Balance Is :" << obj.AccountManager.totalIncome.getTotalIncome();
                }
                else
                {
                    cout << "\nSorry Low Balance!\n";
                }
            }
            file.close();
            break;
        }
        case 5:
        {
            ofstream file("PaidWaterEmployeeData.txt", ios::app);
            obj.WaterManager.waterEmployee.Display_Data("waterEmployee");
            if (obj.WaterManager.waterEmployee.check == 1)
            {
                cout << "\nEnter Salary :";
                cin >> Salary;
                if (Salary < obj.AccountManager.totalIncome.getTotalIncome())
                {

                    file << "Emloyee Id :" << obj.WaterManager.waterEmployee.user_id << endl;
                    file << "Salary :" << Salary << endl;
                    obj.ParkingManager.totalIncome.subtractEmployeeSalary(Salary);
                    cout << "\nNow Current Balance Is :" << obj.AccountManager.totalIncome.getTotalIncome();
                }
                else
                {
                    cout << "\nSorry Low Balance!\n";
                }
            }
            file.close();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::PaymentHistory()
{
    while (ch == 0)
    {
        cin.ignore();
        long double Salary;
        system("clear");
        cout << "\n...........Welcome To Payament History Repository..........\n\n";
        cout << "1)Manager Salary\n"
                "2)Account Employee Salary\n"
                "3)Maintenance Employee Salary\n"
                "4)Parking Employee Salary\n"
                "6)Water Employee Salary\n"
                "Your Chocie :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            string id;
            ifstream file("PaidManagersData.txt");
            cout << "Enter Manager Id :";
            cin >> id;
            string storing;
            while (getline(file, storing))
            {
                if (storing.find(id) != string::npos)
                {
                    cout << storing << endl;
                    if (getline(file, storing))
                    {
                        cout << storing << endl;
                    }
                }
            }
            file.close();
            break;
        }
        case 2:
        {
            string id;
            ifstream file("PaidAccountEmployeeData.txt");
            cout << "Enter Manager Id :";
            cin >> id;
            string storing;
            while (getline(file, storing))
            {
                if (storing.find(id) != string::npos)
                {
                    cout << storing << endl;
                    if (getline(file, storing))
                    {
                        cout << storing << endl;
                    }
                }
            }
            file.close();
            break;
        }
        case 3:
        {
            string id;
            ifstream file("PaidMaintenanceEmployeeData.txt");
            cout << "Enter Manager Id :";
            cin >> id;
            string storing;
            while (getline(file, storing))
            {
                if (storing.find(id) != string::npos)
                {
                    cout << storing << endl;
                    if (getline(file, storing))
                    {
                        cout << storing << endl;
                    }
                }
            }
            file.close();
            break;
        }
        case 4:
        {
            string id;
            ifstream file("PaidParkingEmployeeData.txt");
            cout << "Enter Manager Id :";
            cin >> id;
            string storing;
            while (getline(file, storing))
            {
                if (storing.find(id) != string::npos)
                {
                    cout << storing << endl;
                    if (getline(file, storing))
                    {
                        cout << storing << endl;
                    }
                }
            }
            file.close();
            break;
        }

        case 5:
        {
            string id;
            ifstream file("PaidWaterEmployeeData.txt");
            cout << "Enter Manager Id :";
            cin >> id;
            string storing;
            while (getline(file, storing))
            {
                if (storing.find(id) != string::npos)
                {
                    cout << storing << endl;
                    if (getline(file, storing))
                    {
                        cout << storing << endl;
                    }
                }
            }
            file.close();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::IssuingEmployeePayments()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Issuing Employee Payments Repository.........\n\n";
        cout << "1)Payment Processing\n"
                "2)Payment History\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {

            // write a code for processing payments of each employee by giving id first it gives his details then pay him
            PaymentProcessing();
            break;
        }
        case 2:
        {
            // write a code for processing payments of each employee by giving id first it gives his details then pay him
            PaymentHistory();
            break;
        }

        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue.....\n";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::MaintenanceBudget()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Maintenance Budget Repository.........\n\n";
        cout << "1)Generate Maintenance Budget Reports\n"
                "2)Required Budget\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {

        case 1:
        {
            MaintenanceManagerReport();
            break;
        }
        case 2:
        {
            // write a code for required budget
            while (ch == 0)
            {
                cout << ".......Welcome To Budget Repository........\n\n";
                cout << "1)Required Budget\n"
                        "2)Check Budget\n"
                        "3)Add Budget\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    long double budget;
                    cout << "\nEnter Your Required Budget :";
                    cin >> budget;
                    obj.MaintenanceManager.totalIncome.setMaintenanceBudget(budget);
                    break;
                }
                case 2:
                {
                    cout << "\nYour Required Budget Is :" << obj.MaintenanceManager.totalIncome.getMaintenanceBudget() << endl;
                }
                case 3:
                {
                    long double budget;
                    cout << "\nWho Much Budget You Want To Increase :";
                    cin >> budget;
                    obj.MaintenanceManager.totalIncome.setMaintenanceBudget(budget);
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::SubManagersReports()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Sub-Manager Reports Repository.........\n\n";
        cout << "1)Maintenance Manager\n"
                "2)Parking Manager\n"
                "3)Shops Manager\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n..........Welcome To Maintenance Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.ForAccount.ReadReport("MaintenanceReportForAccount");

                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.WriteResponse("AccountResponceToMaintenanceReport");
                    break;
                }
                case 3:
                {

                    cout << "\nGive Your Responce :\n";
                    obj.MaintenanceManager.ForAccount.ReadReport("MaintenanceReportForAccount");
                    cout << endl;
                    cout << "Select Your Choice :\n"
                            "1)Approved\n"
                            "2)Reject\n"
                            "0)Eixt\n"
                            "Your Option :";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                    {
                        obj.MaintenanceManager.ForAccount.ReportStatus = true;
                        if (obj.MaintenanceManager.ForAccount.ReportStatus == true)
                        {
                            cout << "\nYou Can Approved The Report.....\n";
                        }
                        break;
                    }
                    case 2:
                    {
                        obj.MaintenanceManager.ForAccount.ReportStatus = false;
                        if (obj.MaintenanceManager.ForAccount.ReportStatus == false)
                        {
                            cout << "\nYou Can Reject The Report!\n";
                        }
                        break;
                    }
                    case 0:
                    {
                        ch = 1;
                        break;
                    }
                    default:
                    {
                        if (choice != -19)
                            cout << "\nInvalid Choice!\n";
                        break;
                    }
                    }
                    break;
                }
                case 4:
                {
                    obj.MaintenanceManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }

        case 2:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n..........Welcome To Parking Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.ForAccount.ReadReport("ParkingReportForAccount");

                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.WriteResponse("AccountResponceToParkingReport");
                    break;
                }
                case 3:
                {
                    cout << "\nGive Your Responce :\n";
                    obj.ParkingManager.ForAccount.ReadReport("ParkingReportForAccount");
                    cout << endl;
                    cout << "Select Your Choice :\n"
                            "1)Approved\n"
                            "2)Reject\n"
                            "0)Exit\n"
                            "Your Option :";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                    {
                        obj.ParkingManager.ForAccount.ReportStatus = true;
                        if (obj.ParkingManager.ForAccount.ReportStatus == true)
                        {
                            cout << "\nYou Can Approved The Report.....\n";
                        }
                        break;
                    }
                    case 2:
                    {
                        obj.ParkingManager.ForAccount.ReportStatus = false;
                        if (obj.ParkingManager.ForAccount.ReportStatus == false)
                        {
                            cout << "\nYou Can Reject The Report!\n";
                        }
                        break;
                    }
                    case 0:
                    {
                        ch = 1;
                        break;
                    }
                    default:
                    {
                        if (choice != -19)
                            cout << "\nInvalid Choice!\n";
                        break;
                    }
                    break;
                    }
                }
                case 4:
                {
                    obj.ParkingManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n..........Welcome To Shops Manager Reports Repository.........\n\n";
                cout << "1)Read Report Or Message\n"
                        "2)Giving Response Or Message\n"
                        "3)Report Approval\n"
                        "4)Check Approval\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.ForAccount.ReadReport("ShopReportForAccount");

                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.WriteResponse("AccountResponceToShopReport");
                    break;
                }
                case 3:
                {

                    cout << "\nGive Your Responce :\n";
                    obj.ShopsManager.ForAccount.ReadReport("ShopReportForAccount");
                    cout << endl;
                    cout << "Select Your Choice :\n"
                            "1)Approved\n"
                            "2)Reject\n"
                            "0)Exit\n"
                            "Your Option :";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                    {
                        obj.ShopsManager.ForAccount.ReportStatus = true;
                        if (obj.ShopsManager.ForAccount.ReportStatus == true)
                        {
                            cout << "\nYou Can Approved The Report.....\n";
                        }
                        break;
                    }
                    case 2:
                    {
                        obj.ShopsManager.ForAccount.ReportStatus = false;
                        if (obj.ShopsManager.ForAccount.ReportStatus == false)
                        {
                            cout << "\nYou Can Reject The Report!\n";
                        }
                        break;
                    }
                    case 0:
                    {
                        ch = 1;
                        break;
                    }
                    default:
                    {
                        if (choice != -19)
                            cout << "\nInvalid Choice!\n";
                        break;
                    }
                    }
                    break;
                }
                case 4:
                {
                    obj.ShopsManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }

                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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

            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }

        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::AccountEmployees()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.......Welcome To Account Employees Repository.......\n\n"
                "1)Add Employee\n"
                "2)Remove Employee\n"
                "3)Replace Employee\n"
                "4)Total Employee Details\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            account.accountEmployee.input_Data("AccountEmployee");
            break;
        }
        case 2:
        {
            account.Remove_Employee("AccountEmployee");
            break;
        }
        case 3:
        {
            account.Replace_employ("AccountEmployee");
            break;
        }
        case 4:
        {
            account.accountEmployee.Total_employee_Details("AccountEmployee");
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::MaintenanceManagerReport()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Maintenance Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Delete Report\n"
                "6)Report Approval Status\n"
                "7)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Writting Resport Repository..........\n\n";
                cout << "Write Report :\n"
                        "1)To Head\n"
                        "2)To Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.Add_report("MaintenanceReportForHead");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.Add_report("MaintenanceReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 2:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Editing Resport Repository..........\n\n";
                cout << "Edit Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.Edit_report("MaintenanceReportForHead");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.Edit_report("MaintenanceReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            // write a code for reading report  which has written by himself

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Reading Resport Repository..........\n\n";
                cout << "Read Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.ReadReport("MaintenanceReportForHead");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.ReadReport("MaintenanceReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {

            // write a code for replacing the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Adding Resport Repository..........\n\n";
                cout << "Add Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.Add_report("MaintenanceReportForHead");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.Add_report("MaintenanceReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 5:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Delete Resport Repository..........\n\n";
                cout << "Delete Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.Delete_report("MaintenanceReportForHead");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.Delete_report("MaintenanceReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 6:
        {

            // write a code for giving approval or rejection to the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Resport Status Repository..........\n\n";
                cout << "Check Report Status :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.ReportsStatus();
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 7:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Read Response Repository..........\n\n";
                cout << "Read Responce :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.MaintenanceManager.ReadResponse("HeadResponceToMaintenanceReport");
                    break;
                }
                case 2:
                {
                    obj.MaintenanceManager.ForAccount.ReadResponse("AccountResponceToMaintenanceReport");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
            // write a code for reading the head or account manager response
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::ParkingManagerReport()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Parking Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Delete Report\n"
                "6)Report Approval Status\n"
                "7)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
            // hopfully we will write this code for both, head and accountant ,these are included in further choices
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Writting Resport Repository..........\n\n";
                cout << "Write Report :\n"
                        "1)To Head\n"
                        "2)To Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.Add_report("ParkingReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.Add_report("ParkingReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 2:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Editing Resport Repository..........\n\n";
                cout << "Edit Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.Edit_report("ParkingReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.Edit_report("ParkingReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            // write a code for reading report  which has written by himself

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Reading Resport Repository..........\n\n";
                cout << "Read Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.ReadReport("ParkingReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.ReadReport("ParkingReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {

            // write a code for replacing the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Adding Resport Repository..........\n\n";
                cout << "Add Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.Add_report("ParkingReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.Add_report("ParkingReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 5:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Delete Resport Repository..........\n\n";
                cout << "Delete Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.Delete_report("ParkingReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.Delete_report("ParkingReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 6:
        {

            // write a code for giving approval or rejection to the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Resport Status Repository..........\n\n";
                cout << "Check Report Status :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.ReportsStatus();
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 7:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Read Response Repository..........\n\n";
                cout << "Read Responce :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ParkingManager.ReadResponse("HeadResponceToParkingReport");
                    break;
                }
                case 2:
                {
                    obj.ParkingManager.ForAccount.ReadResponse("AccountResponceToParkingReport");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::ShopManagerReport()
{
    while (ch == 0)
    {
        system("clear");
        cout << "\n..........Welcome To Shop Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Delete Report\n"
                "6)Report Approval Status\n"
                "7)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            // write a code for writing a report or message which send from the side of maintenance manager to head

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Writting Resport Repository..........\n\n";
                cout << "Write Report :\n"
                        "1)To Head\n"
                        "2)To Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.Add_report("ShopReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.Add_report("ShopReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 2:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Editing Resport Repository..........\n\n";
                cout << "Edit Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.Edit_report("ShopReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.Edit_report("ShopReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 3:
        {
            // write a code for reading report  which has written by himself

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Reading Resport Repository..........\n\n";
                cout << "Read Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.ReadReport("ShopReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.ReadReport("ShopReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 4:
        {

            // write a code for replacing the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Adding Resport Repository..........\n\n";
                cout << "Add Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.Add_report("ShopReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.Add_report("ShopReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 5:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Delete Resport Repository..........\n\n";
                cout << "Delete Report :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.Delete_report("ShopReportForHead");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.Delete_report("ShopReportForAccount");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;
            break;
        }
        case 6:
        {

            // write a code for giving approval or rejection to the report
            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Resport Status Repository..........\n\n";
                cout << "Check Report Status :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.ReportsStatus();
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.ReportsStatus();
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
                }
            }
            ch = 0;

            break;
        }
        case 7:
        {

            while (ch == 0)
            {
                cin.ignore();
                system("clear");
                cout << "\n.........Welcome To Read Response Repository..........\n\n";
                cout << "Read Responce :\n"
                        "1)Head\n"
                        "2)Account Manager\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice1;
                choice = InvaidChoice();
                switch (choice)
                {
                case 1:
                {
                    obj.ShopsManager.ReadResponse("HeadResponceToShopReport");
                    break;
                }
                case 2:
                {
                    obj.ShopsManager.ForAccount.ReadResponse("AccountResponceToShopReport");
                    break;
                }
                case 0:
                {
                    ch = 1;
                    break;
                }
                default:
                {
                    if (choice != -19)
                        cout << "\nInvalid Choice!\n";
                    break;
                }
                }
                if (ch != 1)
                {
                    cout << "\nPress Enter To Continue......";
                    cin.ignore();
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
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}

void Menus::AccountManagerReport()
{
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n..........Welcome To Account Manager Reports Repository.........\n\n";
        cout << "1)Write Report\n"
                "2)Edit Report\n"
                "3)Read Report Or Message\n"
                "4)Replace Report\n"
                "5)Delete Report\n"
                "6)Report Approval Status\n"
                "7)Check Response\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
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
            break;
        }
        case 3:
        {
            // write a code for reading report  which has written by himself
            obj.AccountManager.ReadReport("AccountReport");
            break;
        }
        case 4:
        {
            // write a code for replacing the report
            obj.AccountManager.Add_report("AccountReport");
            break;
        }
        case 5:
        {
            obj.AccountManager.Delete_report("AccountReport");
            break;
        }
        case 6:
        {
            obj.AccountManager.ReportsStatus();
            // write a code for giving approval or rejection to the report

            break;
        }
        case 7:
        {
            // write a code for reading the head or account manager response
            obj.AccountManager.ReadResponse("ResponseToAccountReport");
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }
        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        if (ch != 1)
        {
            cout << "\nPress Enter To Continue......";
            cin.ignore();
        }
    }
    ch = 0;
}
void Menus::calculator()
{
    Calculator<long double> *calculator;
    while (ch == 0)
    {
        cin.ignore();
        system("clear");
        cout << "\n.........Welcome To Calculator........\n\n";
        cout << "Select Your Choice :\n"
                "1)Addition\n"
                "2)Subtracton\n"
                "3)Multiplication\n"
                "4)Divition\n"
                "5)Percentage\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice1;
        choice = InvaidChoice();
        switch (choice)
        {
        case 1:
        {
            calculator = new addition;
            calculator->calculation();

            break;
        }
        case 2:
        {
            calculator = new subtraction;
            calculator->calculation();
            break;
        }
        case 3:
        {
            calculator = new multiplication;
            calculator->calculation();
            break;
        }
        case 4:
        {
            calculator = new divition;
            calculator->calculation();
            break;
        }
        case 5:
        {
            calculator = new percentage;
            calculator->calculation();
            break;
        }
        case 0:
        {
            ch = 1;
            break;
        }

        default:
        {
            if (choice != -19)
                cout << "\nInvalid Choice!\n";
            break;
        }
        }
        delete calculator;
        cout << "\nPress Enter To Continue......";

        cin.ignore();
    }
    ch = 0;
}
