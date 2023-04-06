#ifndef __ACCOUNTS__H__
#define __ACCOUNTS__H__
#include <string>
#include <iostream>
#include <fstream>
#include "Employee.h"
class Report;
using namespace std;
template <class T>
class Accounts : public Detail, public Report
{

private:
    T parkingIncome;
    T shopsIncome;

public:
    TotalIncome &totalIncome = TotalIncome::getInstance();
    Accounts() {}
    Employ accountEmployee;
    ~Accounts(){}
};
#endif //!__ACCOUNTS__H__
