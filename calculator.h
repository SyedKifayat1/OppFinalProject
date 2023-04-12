#include <iostream>
using namespace std;
template <class T>
class Calculator
{
private:
    T firstNum, secondNum;

public:
    virtual void calculation() = 0;
    void firstSet()
    {
        cout << "\nEnter First Number :";
        cin >> firstNum;
    }
    T firstGet()
    {
        return firstNum;
    }
    void secondSet()
    {
        cout << "\nEnter Second Number :";
        cin >> secondNum;
    }
    T secondGet()
    {
        return secondNum;
    }
};
class addition : public Calculator<long double>
{
public:
    void calculation() 
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Addition Is :" << firstGet() + secondGet() << endl;
    }
};
class subtraction : public Calculator<long double>
{
public:
    void calculation() 
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Subtraction Is :" << firstGet() - secondGet() << endl;
    }
};
class multiplication : public Calculator<long double>
{
public:
    void calculation()
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Multiplication Is :" << firstGet() * secondGet() << endl;
    }
};
class divition : public Calculator<long double>
{
public:
    void calculation()
    {
        firstSet();
        secondSet();
        if (secondGet() == 0)
        {
            cout << "\nSorry Math Error!\n";
        }
        else
        {
            cout << "\nResult Of Divition Is :" << firstGet() / secondGet() << endl;
        }
    }
};
class percentage : public Calculator<long double>
{
public:
    void calculation() 
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