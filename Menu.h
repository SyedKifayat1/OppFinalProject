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
                "2)Manager\n"
                "3)Sub-Manager\n"
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
                                    //wirte a code for getting data with ID No
                                    break;
                                }
                                case 2:
                                {
                                    //write a code for getting data as a whole
                                    break;
                                }
                                case 3:
                                {
                                    //write a code for getting data with Department name
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
                            break;
                        }
                        case 3:
                        {
                            break;
                        }
                        case 4:
                        {
                            break;
                        }
                        case 5:
                        {
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
                cout << "\n.......Welcome Manager Repository.......\n\n"
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
                        cout << "\n.........Welcome To Employee Details.......\n\n";
                        cout << "Select Option :\n1)Display\n2)New Entry\n3)Update\n4)Delete\n0)Exit\nYour Choice :";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                        {
                            while (ch == 0)
                            {
                                cout << "\n........Select The Status Of Employee........\n\n";
                                cout << "Select Your Choice :\n1)Security Guards\n2)Parking\n3)Cleaning Staf\n4)Sales Man\n0)Exit\nEnter Your Choice :";
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
                                case 4:
                                {
                                    break;
                                }
                                case 0:
                                {
                                    ch = 1;
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
                                cout << "\n........Select The Status Of Employee........\n\n";
                                cout << "Select Your Choice :\n1)Security Guards\n2)Parking\n3)Cleaning Staf\n4)Sales Man\n0)Exit\nEnter Your Choice :";
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
                                case 4:
                                {
                                    break;
                                }
                                case 0:
                                {
                                    ch = 1;
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
                                cout << "\n........Select The Status Of Employee........\n\n";
                                cout << "Select Your Choice :\n1)Security Guards\n2)Parking\n3)Cleaning Staf\n4)Sales Man\n0)Exit\nEnter Your Choice :";
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
                                case 4:
                                {
                                    break;
                                }
                                case 0:
                                {
                                    ch = 1;
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
                                cout << "\n........Select The Status Of Employee........\n\n";
                                cout << "Select Your Choice :\n1)Security Guards\n2)Parking\n3)Cleaning Staf\n4)Sales Man\n0)Exit\nEnter Your Choice :";
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
                                case 4:
                                {
                                    break;
                                }
                                case 0:
                                {
                                    ch = 1;
                                    break;
                                }
                                }
                            }
                            ch = 0;
                            break;
                        }
                        case 0:
                        {
                            break;
                        }
                        default:
                            break;
                        }
                    }
                    ch = 0;
                    break;
                }
                case 2:
                {
                }
                case 3:
                {

                    break;
                }
                case 4:
                {
                    break;
                }
                case 5:
                {
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