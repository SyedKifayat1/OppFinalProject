#include <iostream>
#include "Accounts.h"
#include "Maintenance.h"
#include "water.h"
#include "Electricity.h"
#include "Security.h"
#include "Parking.h"
#include "Shops.h"
using namespace std;
class Manager
{
    public:
    Manager()
    {
    
    }
    Accounts AccountManager;
    Shops ShopsManager;
    Maintaineance MaintenanceManager;
    Parking ParkingManager;
    water WaterManager;
    Security SecurityManager;
};