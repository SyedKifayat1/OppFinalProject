#ifndef __SECURITY_PERSONNEL__H__
#define __SECURITY_PERSONNEL__H__

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Personnel
{
private:
    string name;
    string weapon;

public:
    Personnel(string name, string weapon)
    {
        this->name = name;
        this->weapon = weapon;
    }
    string get_name()
    {
        return name;
    }

    string get_weapon()
    {
        return weapon;
    }

    void set_name(string name)
    {
        this->name = name;
    }

    void set_weapon(string weapon)
    {
        this->weapon = weapon;
    }
};
#endif //!__SECURITY_PERSONNEL__H__
