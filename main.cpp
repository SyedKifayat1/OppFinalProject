#include <iostream>
#include "Detail.h"
#include "Menu.h"
#include "Electricity.h"
#include "water.h"
#include "Security.h"
#include "Maintenance.h"
using namespace std;
int main()
{

    Menus body;
    // body.Menu();
    Security s;
    s.add_personnel("murtaza", "mp4");

    return 0;
}