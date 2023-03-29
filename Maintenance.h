#ifndef __MAINTENANCE__H__
#define __MAINTENANCE__H__
#include "Detail.h"
#include "Employee.h"
#include <iostream>
using namespace std;
class Maintaineance : public Detail, public Report
{

public:
   Report ForAccount;
   Employ *E1;
   int k;
   Maintaineance()
   {
      k = 0;
   }
   Maintaineance(Employ *E1)
   {
      this->E1 = E1;
   }
};
#endif //!__MAINTENANCE__H__
