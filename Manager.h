#include <iostream>
#include "Accounts.h"
#include "Maintenance.h"
#include "Electricity.h"
#include "Parking.h"
#include "Shops.h"
#include "Employee.h"
using namespace std;
class Manager
{
    public:
    Manager()
    {
     ptr=new Report[6];
    }
    Report *ptr;
    Employ *employee = new Employ();
    Accounts AccountManager;
    Shops *ShopsManager= new Shops(employee);
    Maintaineance *MaintenanceManager= new Maintaineance(employee);
    Parking *ParkingManager= new Parking(employee);
    ~Manager()
    {
        delete ShopsManager;
        delete ParkingManager;
        delete MaintenanceManager;
        delete employee;
        delete ptr;
    }
};