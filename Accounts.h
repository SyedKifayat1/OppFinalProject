#ifndef __ACCOUNTS__H__
#define __ACCOUNTS__H__

#include <string>
#include <iostream>
#include <fstream>
// #include"Detail.h"
#include "Employee.h"
class Report;
using namespace std;
template <class T>
class Accounts : public Detail, public Report
{
private:
T TotalIncome;
public:
    Employ E;

    // virtual void calculate_employee_salary();
    // virtual void display_employee_salary();
};
#endif //!__ACCOUNTS__H__
