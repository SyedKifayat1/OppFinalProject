#include <iostream>
#include "Detail.h"
using namespace std;

// Detail::Detail()
// {
//     fname = "null";
//     lname = "null";
//     EmailADdress = "null";
//     Status = "null";
//     gender = "null";
//     PhoneNum = 0;
//     salary = 0;
//     hiringDate = 0;
// }
istream &operator>>(istream &in, Detail &x)
{ // non-membber function for entering data
    cout << "\nENTER USE ID: ";
    in >> x.user_id;
    cout << "\nENTER YOUR FIRST NAME  :";
    in >> x.fname;
    cout << "\nENTER YOUR LAST NAME   :";
    in >> x.lname;
    cout << "\nENTER YOUR EMAIL ID    :";
    in >> x.EmailADdress;
    cout << "\nENTER YOUR STATUS      :";
    in >> x.Status;
    cout << "\nENTER YOUR JOB TITLE      :";
    in >> x.JobTitle;
    cout << "\nENTER YOUR GENDER      :";
    in >> x.gender;
    cout << "\nENTER YOUR PHONE NUMBER  :";
    in >> x.PhoneNum;
    cout << "\nENTER YOUR SALARY        :";
    in >> x.salary;
    cout << "\nENTER YOUR HIRING DATE    :";
    in >> x.hiringDate;
    return in;
}
ostream &operator<<(ostream &out, const Detail &y)
{ // non-member function for displaying
    out << "FIRST NAME :" << y.fname << endl;
    out << "LAST NAME  :" << y.lname << endl;
    out << "EMAIL ID   :" << y.EmailADdress << endl;
    out << "STATUS     :" << y.Status << endl;
    out << "GENDER     :" << y.gender << endl;
    out << "PHONE NUMBER:" << y.PhoneNum << endl;
    out << "SALARY     :" << y.salary << endl;
    out << "HIRING DATE:" << y.hiringDate << endl;
    return out;
}
