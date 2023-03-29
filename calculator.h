#include <iostream>
using namespace std;
template <class T>
class Calculator
{
private:
    T first, second;

public:
    virtual void calculation() = 0;
    void firstSet()
    {
        cout << "\nEnter First Number :";
        cin >> first;
    }
    T firstGet()
    {
        return first;
    }
    void secondSet()
    {
        cout << "\nEnter Second Number :";
        cin >> second;
    }
    T secondGet()
    {
        return second;
    }
};
class addition : public Calculator<long double>
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Addition Is :" << firstGet() + secondGet() << endl;
    }
};
class subtraction : public Calculator<long double>
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Subtraction Is :" << firstGet() - secondGet() << endl;
    }
};
class multiplication : public Calculator<long double>
{
public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout << "\nResult Of Multiplication Is :" << firstGet() * secondGet() << endl;
    }
};
class divition : public Calculator<long double>
{
public:
    void calculation() override
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