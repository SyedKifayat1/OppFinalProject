#include <iostream>
#include<string>
#include<fstream>
using namespace std;

// singleton class 
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
        storeAccountData();
    }

    // adding shops income into the total
    void addShopIncome(long double income)
    {
        totalIncome += income;
        storeAccountData();
    }
    void AddShopTotalIncome(long double income)
    {
        ShopTotalIncome += income;
        storeAccountData();
    }
    void AddParkingTotalIncome(long double income)
    {
        ParkingTotalIncome += income;
        storeAccountData();
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
    void setMaintenanceBudget(long double income)
    {
        MaintenanceBudget = income;
    }
    long double getMaintenanceBudget()
    {
        return MaintenanceBudget;
    }
    // subtracting employee salary from total income
    void subtractEmployeeSalary(long double salary)
    {
        totalIncome -= salary;
        storeAccountData();
    }
    void addMaintenanceBudget(long double add)
    {
        MaintenanceBudget += add;
    }
    void restoreAccountsData()
    {
        ifstream file("StoreCurrentBudget.txt");
        if (!file.is_open())
        {
        }
        else
        {
            string line;
            long double num;
            getline(file, line, ':');
            getline(file, line, '\n');
            num=stold(line);
            totalIncome=num;
            getline(file, line, ':');
            getline(file, line, '\n');
            num=stold(line);
            ShopTotalIncome=num;
            getline(file, line, ':');
            getline(file, line, '\n');
            num=stold(line);
            ParkingTotalIncome=num;
            
        }
        file.close();
    }
    void storeAccountData()
    {
        ofstream file("StoreCurrentBudget.txt");
        if (!file.is_open())
        {
            cout << "\nError :Failed To Open File For Writing!\n";
        }
        else
        {
            file << "Current Income :" << totalIncome << endl;
            file << "Shops Income :" << ShopTotalIncome << endl;
            file << "Parking Income :" << ParkingTotalIncome << endl;
        }
        file.close();
    }

private:
    // private constructor to enforce singleton pattern
    TotalIncome() {}

    static long double totalIncome; // declare totalIncome as a static member variable
    static long double ShopTotalIncome, ParkingTotalIncome, MaintenanceBudget;
};

long double TotalIncome::totalIncome = 0; // initialize totalIncome to 0
long double TotalIncome::ShopTotalIncome = 0;
long double TotalIncome::ParkingTotalIncome = 0;
long double TotalIncome::MaintenanceBudget = 0;
