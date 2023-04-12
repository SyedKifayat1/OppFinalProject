#include <iostream>
#include "Detail.h"
using namespace std;

istream &operator>>(istream &in, Detail &x)
{ 

    
    cout << "\nEnter Your First Name :";
    in >> x.FirstName;
    cout << "\nEnter Your Last Name :";
    in >> x.LastName;
    cout << "\nEnter Your Email Id :";
    in >> x.EmailAddress;
    cout << "\nEnter Your Job Title :";
    in >> x.JobTitle;
    cout << "\nEnter Your Gender :";
    in >> x.gender;
    cout << "\nEnter Your Phone Number :";
    in>>x.PhoneNum;
    cout << "\nEnter Your Salary :";
    in >> x.salary;
    cout << "\nEnter Your Hiring Date :";
    in >> x.hiringDate;
    return in;
}

ostream &operator<<(ostream &out, const Detail &y)
{ // non-member function for displaying
    out << "FIRST NAME :" << y.FirstName << endl;
    out << "LAST NAME :" << y.LastName << endl;
    out << "EMAIL ID :" << y.EmailAddress << endl;
    out << "Job Title :" << y.JobTitle; 
    out << "GENDER :" << y.gender << endl;
    out << "PHONE NUMBER :" << y.PhoneNum << endl;
    out << "SALARY :" << y.salary << endl;
    out << "HIRING DATE :" << y.hiringDate << endl;
    return out;
}
