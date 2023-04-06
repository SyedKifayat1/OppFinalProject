#include <iostream>
#include "Accounts.h"
#include "Maintenance.h"
#include "Electricity.h"
#include "Parking.h"
#include "Shops.h"
using namespace std;
class Manager
{
    public:
    Manager()
    {
     ptr=new Report[6];
    }
    Report *ptr;
    Accounts<int> AccountManager;
    Shops ShopsManager;
    Maintaineance MaintenanceManager;
    Parking ParkingManager;
    ~Manager()
    {
        delete ptr;
    }
};