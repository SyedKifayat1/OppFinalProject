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

            while (ch == 0)
            {
                cout << "\n.......Welcome To Head Repository.......\n\n"
                        "1)Manage Manager\n"
                        "2)Mall Details\n"
                        "0)Exit\n"
                        "Your Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    while (ch == 0)
                    {
                        cout << "\n.......Welcome To Head Sub Repository.......\n\n"
                                "1)Add Manager\n"
                                "2)Remove Manager\n"
                                "3)Replace Manager\n"
                                "0)Exit\n"
                                "Your Choice :";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                        {
                            // write adding manager code here
                            break;
                        }
                        case 2:
                        {
                            // write remove manager code here
                            break;
                        }
                        case 3:
                        {
                            // write replace manager code here
                            break;
                        }
                        case 0:
                        {
                            ch = 1;
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
                        cout << "\n.......Welcome To Head Sub Repository.......\n\n"
                                "1)Employee Details\n"
                                "2)Shop Details\n"
                                "3)Account Details\n"
                                "4)Parking Details\n"
                                "5)Maintenance Details\n"
                                "0)Exit\n"
                                "Your Choice :";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                        {
                            while (ch == 0)
                            {
                                cout << "\n.......Welcome To Employee Details Repository.......\n\n"
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
                                cout << "\n.......Welcome To Shop Details Repository.......\n\n"
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
                                cout << "\n.......Welcome To Accounts Details Repository.......\n\n"
                                        "1)Getting Details of Employees Salary \n"
                                        "2)Getting Details of Total Income Sources\n"
                                        "3)Getting Details of Departments Budget\n"
                                        "4)Getting Details of Total Profit\n"
                                        "5)Getting Details of Current Amount\n"
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
                                cout << "\n.......Welcome To Parking Details Repository.......\n\n"
                                        "1)Getting Details of Income \n"
                                        "2)Getting Details Of Parking\n"
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
                                cout << "\n.......Welcome To Maintenance Details Repository.......\n\n"
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
                cout << "\n........Welcome To Sub-Manager Repository........\n\n"
                        "Select Your Status :\n"
                        "1)Account Manager\n"
                        "2)Maintenance Manager\n"
                        "3)Parking Manager\n"
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
}