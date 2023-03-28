#include<iostream>
using namespace std;
class Calculator
{
    private:
    long double first,second;
    
    public:
    virtual void calculation()=0;
    void firstSet()
    {
        cout<<"\nEnter First Number :";
        cin>>first;
    }
    long double firstGet()
    {
        return first;
    }
    void secondSet()
    {
        cout<<"\nEnter Second Number :";
        cin>>second;
    }
    long double secondGet()
    {
        return second;
    }
};
class addition:public Calculator
{
    public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout<<"\nResult Of Addition Is :"<<firstGet()+secondGet()<<endl;
    }

};
class subtraction:public Calculator
{
    public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout<<"\nResult Of Subtraction Is :"<<firstGet()-secondGet()<<endl;
    }

};
class multiplication:public Calculator
{
    public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout<<"\nResult Of Multiplication Is :"<<firstGet()*secondGet()<<endl;
    }

};
class divition:public Calculator
{
    public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout<<"\nResult Of Divition Is :"<<firstGet()/secondGet()<<endl;
    }

};
class percentage:public Calculator
{
    public:
    void calculation() override
    {
        firstSet();
        secondSet();
        cout<<"\nResult Of Percentage Is :"<<(firstGet()/secondGet())*100<<"%"<<endl;
    }

};