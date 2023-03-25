#include <iostream>
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
    void Menu();
    void HeadMenu();
    void SubManagerMenu();
    void ManageSubManager();
    void MallDetails();
    void AccountManager();
    void MaintenanceManager();
    void ParkingManager();
    void ShopsManager();
    void WaterManager();
    void SecurityManager();
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
    void ParkingIncome();
    void ShopsRent();
    void MaintenanceDetails();
    void CheckMaintenanceData();
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
};
 //................,,,,,,,,,,,,,,,......... //write a code for check maintenance data,    576,,,,,,,,,,,,..................
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
        cout << "1)Check Maintenance Data\n"
                "2)Add Maintenance Data\n"
                "3)Maintenance Employees\n"
                "4)Budget\n"
                "0)Exit\n"
                "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            CheckMaintenanceData();
            break;
        }
        case 2:
        {
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
void Menus::CheckMaintenanceData()
{
       //write a code for check maintenance data
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
        cout << "\n..........Welcome To Security Manager Repository..........\n\n";
        cout << "1)Check Security Data\n"
                "2)Add Security Data\n"
                "3)Security Employees\n"
                "0)Exit\n"
                "Enter Your Choice :";
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
        case 3:
        {
            SecurityEmployees();
            
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

                "0)Exit\n"
                "Enter Your Choice :";
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
                "2)Add Shops Data\n"
                "3)Shops Employees\n"
                "0)Exit\n"
                "Enter Your Choice :";
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
        case 3:
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
                "0)Exit\n"
                "Enter Your Choice :";
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
            // write a code for adding Account manager
            break;
        }
        case 2:
        {
            // write a code for Removing account manager
            break;
        }
        case 3:
        {
            // write a code for replace account manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
            // write a code for adding Account manager
            break;
        }
        case 2:
        {
            // write a code for Removing account manager
            break;
        }
        case 3:
        {
            // write a code for replace account manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
            // write a code for adding Account manager
            break;
        }
        case 2:
        {
            // write a code for Removing account manager
            break;
        }
        case 3:
        {
            // write a code for replace account manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
            // write a code for adding Maintenance manager
            break;
        }
        case 2:
        {
            // write a code for Removing Maintenance manager
            break;
        }
        case 3:
        {
            // write a code for replace Maintenance manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
            // write a code for add Parking  manager
            break;
        }
        case 2:
        {
            // write a code for remove Parking  manager
            break;
        }
        case 3:
        {
            // write a code for Replaceing Parking manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
            // write a code for adding  shop manager
            break;
        }
        case 2:
        {
            // write a code for remove shop manager
            break;
        }
        case 3:
        {
            // write a code for replace shop manager
            break;
        }
        case 4:
        {
            // write a code for showing details
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
        cout << "\n.......Welcome To Checking Employee Details Repository.......\n\n"
                "1)Getting Data By ID No \n"
                "2)Getting Data As A Whole\n"
                "3)Getting Data With Department Name\n"
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
        case 3:
        {
            // write a code for getting data with Department name
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
                "1)Checking Pluming Issues\n"
                "2)Water Resources\n"
                "3)Water Providing authority Details\n"

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
        case 3:
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
void Menus::MaintenanceDetails()
{
    while (ch == 0)
    {
        cout << "\n.......Welcome To Checking Maintenance Details Repository.......\n\n"
                "1)Getting Details Of Security\n"
                "2)Getting Details Of Water Resorces\n"
                "3)Getting Details of Electricity Resources\n"
                "0)Exit\n"
                "Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
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
            break;
        }
        case 2:
        {
            // making a  cases for the implementation of water class
            break;
        }
        case 3:
        {
            // write a electricity class code for the head whom can only read the details
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

            MaintenanceBudget();
            break;
        }
        case 2:
        {
            WaterBudget();
            break;
        }
        case 3:
        {
            SecurityBudget();
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