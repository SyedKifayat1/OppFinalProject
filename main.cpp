#include "Menu.h"
#include "Employee.h"
#include "Parking.h"
int main()
{

    Menus body;
    body.Menu();
    Parking p;
    // p.set_available_parking();
    // p.Vehicle_entry();

    cout << p.get_Earnings();
    cout << endl;
    return 0;
}