
#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
using namespace std;
class Detail {                   //detail class
public:
string fname,lname,EmailADdress,JobTitle,Status,gender;          //attributes
int PhoneNum,salary,hiringDate;
friend istream& operator >>(istream & in,Detail & x);          //friend function prototype
friend ostream & operator<<(ostream &out ,const Detail&y);           //friend function prototype
};
#endif //OPPFINALPROJECT_DETAIL_H
