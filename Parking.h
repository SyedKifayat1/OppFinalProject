#ifndef __PARKING__H__
#define __PARKING__H__

#include <iostream>
#include "Detail.h"
#include "Employee.h"
using namespace std;
class Parking : public Detail, public Report
{
public:
    Employ E2;
};
#endif //!__PARKING__H__