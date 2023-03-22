
#ifndef OPPFINALPROJECT_DETAIL_H
#define OPPFINALPROJECT_DETAIL_H
#include <iostream>
#include <vector>
using namespace std;
class Detail {                   //detail class
public:
string fname,lname,EmailADdress,JobTitle,Status,gender,PhoneNum;          //attributes
int salary,hiringDate;
void addDetail(){
    cin>>*this;
}
void deleteDetail(){
    fname=" ";
    lname=" ";
    EmailADdress=" ";
    Status= " ";
    gender=" ";
    PhoneNum=" ";
    salary=0;
    hiringDate=0;
}
void findDetail(){
    cout<<*this;
}
void Info() {
    int choice, ch;

    int size;
    cout << "ENTER THE NUMER OF EMPLOYEE YOU WAN TO ENTER\n";
    cin >> size;
    Detail *people = new Detail[size];
    while (ch == 0) {
        cout << "ENTER 1 TO ADD THE DETAIL OF THE PERSON\n";
        cout << "ENTER 2 DELETE THE DETAIL OF THE PERSON\n";
        cout << "ENTER 3 TO DISPLAY THE DETAIL OF THE PERSON\n";
        cin >> choice;

        switch (choice) {

            case 1: {
                for (int i = 0; i < size; i++) {
                    cout << "ENTER PERSONAL INFORMATION OF PERSON " << i + 1 << ": " << endl;
                    people[i].addDetail();
                }
                break;
            }
            case 2: {
                for (int i = 0; i < size; i++) {
                    cout << "ENTER PERSONAL INFORMATION OF PERSON " << i + 1 << ": " << endl;
                    people[i].findDetail();
                }
                break;
            }
            case 3: {
                int indexNum;
                cout << "ENTER THE INDEX OF THE PERSON WHOSE DETAIL YOU WANT TO DELETE\n";
                cin >> indexNum;
                if (indexNum >= 1 && indexNum <= size) {
                    people[indexNum - 1].deleteDetail();
                    cout << "DETAIL DELETED SUCCESSFULLY\n";
                } else {
                    cout << "Invalid information\n";
                }
                break;
            }
            case 4: {
                for (int i = 0; i < size; i++) {
                    cout << "ENTER PERSONAL INFORMATION OF PERSON " << i + 1 << ": " << endl;
                    people[i].findDetail();

                }
                break;
            }
            case 0:{

                ch==1;
                break;
            }
        }
    }
}
friend istream& operator >>(istream & in,Detail & x);          //friend function prototype
friend ostream & operator<<(ostream &out ,const Detail&y);           //friend function prototype
};
#endif //OPPFINALPROJECT_DETAIL_H
