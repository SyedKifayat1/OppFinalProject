#include <iostream>
#include "Detail.h"
using namespace std;

#include "fstream"
ofstream of("new.txt",ios::app);



istream &operator>>(istream &in, Detail &x) {           //non-membber function for entering data
    cout << "\nENTER YOUR FIRST NAME  :";
    in >> x.fname;
    of<<x.fname;
    cout << "\nENTER YOUR LAST NAME   :";
    in >> x.lname;
    of<<x.lname;
    cout << "\nENTER YOUR EMAIL ID    :";
    in >> x.EmailADdress;
    of<<x.EmailADdress;
    cout << "\nENTER YOUR STATUS      :";
    in >> x.Status;
    of<<x.Status;
    cout << "\nENTER YOUR GENDER      :";
    in >> x.gender;
    of<<x.gender;
    cout << "\nENTER YOUR PHONE NUMBER  :";
    in >> x.PhoneNum;
    of<<x.PhoneNum;
    cout << "\nENTER YOUR SALARY        :";
    in >> x.salary;
    of<<x.salary;
    cout << "\nENTER YOUR HIRING DATE    :";
    in >> x.hiringDate;
    of<<x.hiringDate;
    return in;
}
ostream &operator<<(ostream &out,const Detail &y) {             //non-member function for displaying
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



