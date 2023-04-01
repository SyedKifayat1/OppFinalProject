#include <iostream>
using namespace std;
class TotalIncome
{
public:
    // get the singleton instance of the class
    static TotalIncome &getInstance()
    {
        static TotalIncome instance;
        return instance;
    }

    // adding parking incomes into the total
    void addParkingIncome(long double income)
    {
        totalIncome += income;
    }

    // adding shops income into the total
    void addShopIncome(long double income)
    {
        totalIncome += income;
    }
    void AddShopTotalIncome(long double income)
    {
        ShopTotalIncome+=income;
    }
    void AddParkingTotalIncome(long double income)
    {
        ParkingTotalIncome+=income;
    }

    // getting the total income
    long double getTotalIncome() const
    {
        return totalIncome;
    }
    long double getParkingIncome()
    {
        return ParkingTotalIncome;
    }
    long double getShopIncome()
    {
        return ShopTotalIncome;
    }

    // subtracting employee salary from total income
    void subtractEmployeeSalary(long double salary)
    {
        totalIncome -= salary;
    }

private:
    // private constructor to enforce singleton pattern
    TotalIncome() {}

    static long double totalIncome; // declare totalIncome as a static member variable
    static long double ShopTotalIncome,ParkingTotalIncome;
};

long double TotalIncome::totalIncome = 0; // initialize totalIncome to 0
long double TotalIncome::ShopTotalIncome = 0;
long double TotalIncome::ParkingTotalIncome = 0;
