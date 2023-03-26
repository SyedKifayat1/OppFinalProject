#ifndef __MAINTENANCE__H__
#define __MAINTENANCE__H__
#include"Detail.h"
#include <iostream>
using namespace std;
class Maintaineance:public Detail,public Report
{

public:
   int k;
   Maintaineance()
   {
        k=0;
   }
    
    
};
#endif //!__MAINTENANCE__H__
