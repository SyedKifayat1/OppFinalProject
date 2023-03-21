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
        cout << "Select Your Status :\n1)Head\n2)Manager\n3)Sub-Manager\n0)Exit\nEnter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            while (ch == 0)
            {
                cout << "\n.......Welcome Head Repository.......\n\n1)Employee Details\n2)Shop Details\n3)Account Details\n4)Parking Details\n5)Maintenance Details\n0)Exit\nYour Choice :";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
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
                    ch=1;
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
            while (ch == 0)
            {
                cout << "\n........Welcome To Sub-Manager Repository........\n\nSelect Your Status :\n1)Account Manager\n2)Maintenance Manager\n3)Parking Manager\n0)Exit\nEnter Your Choice :";
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