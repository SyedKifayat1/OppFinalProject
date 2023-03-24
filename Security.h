#ifndef __SECURITY__H__
#define __SECURITY__H__
#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include "Maintaineance.h"
#include "security_personnel.h"
#include <string>

class Security : public Maintaineance
{
protected:
    int security_cameras;
    vector<Personnel> security_personnel;
    string control_room_location;
    string Escape_room_location;
    string company_provider;
    string budget;
    // int number_of_security_guards;

public:
    Security(int security_cameras = 20, int number_of_security_personel = 100, string control_room_location = "D Block", string escape_room_location = "B block")
    {
        this->security_cameras = security_cameras;
        // this->number_of_security_personel = number_of_security_personel;
        this->control_room_location = control_room_location;
        this->Escape_room_location = escape_room_location;
    }

    void add_personnel(string name, string weapon)
    {
        Personnel new_personnel(name, weapon);
        security_personnel.push_back(new_personnel);
    }

    void remove_personnel(int index)
    {
        security_personnel.erase(security_personnel.begin() + index);
    }

    int get_num_personnel()
    {
        return security_personnel.size();
    }

    Personnel get_personnel(int index)
    {
        return security_personnel[index];
    }

    void display_personnel()
    {
        for (int i = 0; i < security_personnel.size(); i++)
        {
            cout << "Personnel " << i + 1 << " :\n";
            cout << "Name: " << security_personnel[i].get_name() << "\n";
            cout << "Weapon: " << security_personnel[i].get_weapon() << "\n\n";
        }
    }

    void setsecurity_cameras(int a) // equate security cameras
    {
        security_cameras = a;
    }

    void setcontrol_room_location(string CRL)
    {
        control_room_location = CRL;
    }

    void setEscape_room_location(string ERL)
    {
        Escape_room_location = ERL;
    }

    void setCompany_provider(string CP)
    {
        company_provider = CP;
    }

    void setBudget(string budget)
    {
        this->budget = budget;
    }

    int getsecurity_cameras() // equate security cameras
    {
        return security_cameras;
    }

    // int getnumber_of_security_personel() // set number of security personel
    // {
    //     return number_of_security_personel;
    // }

    string getcontrol_room_location()
    {
        return control_room_location;
    }

    string getEscape_room_location()
    {
        return Escape_room_location;
    }

    string getCompany_provider(string CP)
    {
        return company_provider;
    }

    string getBudget(string budget)
    {
        return budget;
    }

    void perform_maintaineance()
    {
        cout << "PERFORM MAINTAINCEANCE OF SECURITY CLASS \n";
    }
};

#endif //!__SECURITY__H__
