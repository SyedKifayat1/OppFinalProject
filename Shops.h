#ifndef __SHOPS__H__
#define __SHOPS__H__

#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Shops : public Detail, public Report
{

public:
    Report ForAccount;
    Employ *shopsEmployee;
    Shops(Employ *shopsEmployee)
    {
        this->shopsEmployee = shopsEmployee;
    }
    Shops()
    {
    }
};

#endif //!__SHOPS__H__s