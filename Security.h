#ifndef __SECURITY__H__
#define __SECURITY__H__
#include <iostream>
using namespace std;
#include <fstream>
#include "Maintenance.h"
#include <string>

class Security : public Maintaineance
{
protected:
    int security_cameras;
    int number_of_security_personel;
    string control_room_location;
    string Escape_room_location;
    string company_provider;
    string budget;
    // int number_of_security_guards;

public:
    Security(int security_cameras = 20, int number_of_security_personel = 100, string control_room_location = "D Block", string escape_room_location = "B block")
    {
        this->security_cameras = security_cameras;
        this->number_of_security_personel = number_of_security_personel;
        this->control_room_location = control_room_location;
        this->Escape_room_location = escape_room_location;
    }

    void setsecurity_cameras(int a) // equate security cameras
    {
        security_cameras = a;
    }

    void setnumber_of_security_personel(int b) // set number of security personel
    {
        number_of_security_personel = b;
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

    int getnumber_of_security_personel() // set number of security personel
    {
        return number_of_security_personel;
    }

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

    
};

#endif //!__SECURITY__H__


