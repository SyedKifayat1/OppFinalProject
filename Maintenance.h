#ifndef __MAINTENANCE__H__
#define __MAINTENANCE__H__
#include "Detail.h"
#include "Employee.h"
#include "Electricity.h"
#include <iostream>
using namespace std;
//#define 
class Maintaineance : public Detail, public Report
{

public:
    int RECORDS;
   TotalIncome &totalIncome = TotalIncome::getInstance();
   Report ForAccount;
   Employ *maintaineanceEmployee;
   Electricity *Electricity_Records; // 1 2 3 4 2
  int current_records;
   Maintaineance()
   {
      RECORDS =100;
      current_records = 30;
      Electricity_Records =new Electricity[RECORDS];
   }
   ~Maintaineance()
   {
      //delete maintaineanceEmployee;
      //delete Electricity_Records;
   }
   Maintaineance(Employ *maintaineanceEmployee)
   {
      this->maintaineanceEmployee = maintaineanceEmployee;
      RECORDS =100;
      current_records = 3zxz0;
      Electricity_Records =new Electricity[RECORDS];
   }
   int get_current_Records()
   {
      return current_records;
   }
   void add_single_electricity_record(int i)
   {
      Electricity_Records[i].setElectricityType();
      Electricity_Records[i].setQuantity();
      Electricity_Records[i].setEquipment();
      Electricity_Records[i].setCost();
      Electricity_Records[i].setLocation();
      append_single_record_file(i);
      current_records++;
   }
   void append_single_record_file(int i)
   {
      ofstream file("electricity_record.txt", ios::app);
      file << "Electricity Type :" << Electricity_Records[i].getElectricityType() << endl;
      file << "Quantity :" << Electricity_Records[i].getQuantity() << endl;
      file << "Equipents :" << Electricity_Records[i].getEquipment() << endl;
      file << "Cost :" << Electricity_Records[i].getCost() << endl;
      file << "Location :" << Electricity_Records[i].getLocation() << endl
           << endl;
   }
   
   void append_all_records_file()
   {
      ofstream file("electricity_record.txt", ios::app);
      file.clear();
      file.close();
      for (int i = 0; i < current_records; i++)
      {
         append_single_record_file(i);
      }
   }
   void modify_record_file()
   {
      int n;
      while (true)
      {
         cout << "Enter Record Number To Modify :";
         cin >> n;
         n--;
         if (n > current_records)
         {
            cout << "Invalid, Enter Again :";
         }
         else
            break;
      }
      Electricity_Records[n].setElectricityType();
      Electricity_Records[n].setQuantity();
      Electricity_Records[n].setEquipment();
      Electricity_Records[n].setCost();
      Electricity_Records[n].setLocation();
      append_all_records_file();
   }
   void read_single_record_file(ifstream &file)
   {
      string s;
      getline(file, s, ':');
      getline(file, s, '\n');
      Electricity_Records[current_records].setElectricityType(s);
      getline(file, s, ':');
      getline(file, s, '\n');
      int n = stoi(s);
      Electricity_Records[current_records].setQuantity(n);
      getline(file, s, ':');
      getline(file, s, '\n');
      Electricity_Records[current_records].setEquipment(s);
      getline(file, s, ':');
      getline(file, s, '\n');
      long double d = stold(s);
      Electricity_Records[current_records].setCost(d);
      getline(file, s, ':');
      getline(file, s, '\n');
      Electricity_Records[current_records].setLocation(s);
      file.ignore();
   }
   void read_all_records_file()
   {
      ifstream file("electricity_record.txt");
      if (!file.is_open())
      {
         cout << "Error Failed To Open File For Writing";
      }
      else
      {
         //current_records = 0;
         while (!file.eof())
         {
            read_single_record_file(file);
            current_records++;
         }
      }
      file.close();
   }
   void print_all_records()
   {
      for (int i = 0; i < current_records; i++)
      {
         cout << "Electricity Type :" << Electricity_Records[i].getElectricityType() << endl;
         cout << "Quantity :" << Electricity_Records[i].getQuantity() << endl;
         cout << "Equipments :" << Electricity_Records[i].getEquipment() << endl;
         cout << "Cost :" << Electricity_Records[i].getCost() << endl;
         cout << "Location :" << Electricity_Records[i].getLocation() << "\n\n";
      }
   }

};
#endif //!__MAINTENANCE__H__
