#include <iostream>
#include "Detail.h"
#include "Account.h"
using namespace std;
int main() {
    int x=0;
    int choice;
    Detail a;
    while (x==0)
    {
        cout<<"ENTER 1 FOR EMPLOYEE DETAIL\n";
        cout<<"ENTER 2 TO DISPLAY EMPLOYEE DETAIL\n";
        cout<<"ENTER 3 FOR ACCOUNT  DETAIL\n";
        cin>>choice;
        switch (choice) {

            case 1:{

                cin >> a;
                break;
            }
            case 2:{
                cout << a;
                break;
            }
            case 0:{
                x=1;
                break;

            }
            default:
            {
                cout<<"INVALID  ENTRY\n";
                break;
            }
        }
    }





}