#ifndef __MAINTENANCE__H__
#define __MAINTENANCE__H__
#include "Detail.h"
#include "Employee.h"
#include <iostream>
using namespace std;
class Maintaineance : public Detail, public Report
{

public:
   TotalIncome &totalIncome = TotalIncome::getInstance();
   Report ForAccount;
   Employ *maintaineanceEmployee;
   int k;
   Maintaineance()
   {
      k = 0;
   }
   Maintaineance(Employ *maintaineanceEmployee)
   {
      this->maintaineanceEmployee = maintaineanceEmployee;
   }
};
#endif //!__MAINTENANCE__H__
