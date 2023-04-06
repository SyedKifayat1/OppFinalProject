#include <iostream>
using namespace std;
template <class T>  // template class 
class Calculator
{
private:
    T first, second;

public:
    virtual void calculation() = 0;  // pure virtual function 
    void firstSet()  // input first name from user 
    { 
        cout << "\nEnter First Number :";  
        cin >> first;
    }

    // getting to return first number 
    T firstGet()  
    {
        return first;
    }

    // input second number from user 
    void secondSet() 
    {
        cout << "\nEnter Second Number :";   // 
        cin >> second;
    }

      // return second number to user 
    T secondGet()
    {
        return second;
    }
};

// addition clas 
class addition : public Calculator<long double> // addition class inheritance with template class calculator so that user can enter any data type
{
public:
    void calculation() override  // using calculation virtual function of calculator 
    {
        firstSet();   // input first name from user 
        secondSet();  // input second number from user 
        cout << "\nResult Of Addition Is :" << firstGet() + secondGet() << endl;   // adding two number
    }
};

// class subtraction 
class subtraction : public Calculator<long double> // inheritance of subtraction with calculator 
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Subtraction Is :" << firstGet() - secondGet() << endl;
    }
};

// class multiplication class 
class multiplication : public Calculator<long double> // inheritance of multiplication wiht calcualtor class 
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Multiplication Is :" << firstGet() * secondGet() << endl;
    }
};

// class division 
class divition : public Calculator<long double>  // inheritance of division class with calculator class 
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        if (secondGet() == 0)  // division by zero is not possible 
        {
            cout << "\nSorry Math Error!\n";
        }
        else
        {
            cout << "\nResult Of Divition Is :" << firstGet() / secondGet() << endl;
        }
    }
};

// class percentage to find percentage 
class percentage : public Calculator<long double>
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        if (secondGet() < firstGet())  
        {
            cout << "\nSorry Math Error!\n";
        }
        else
        {
            cout << "\nResult Of Percentage Is :" << (firstGet() / secondGet()) * 100 << "%" << endl;
        }
    }
};