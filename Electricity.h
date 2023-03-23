#ifndef __ELECTRICITY__H__
#define __ELECTRICITY__H__
#include <iostream>
#include <string>
using namespace std;
class Electricity
{
protected:
    int voltage;
    bool circuit_breaker;
    float current;
    bool is_working;

public:
    void check_equipment()
    {
        cout << "CHECKING CURRENT STATE OF EQUIPMENT\n";
    }

    void fix_equipment()
    {
    }

    void set_voltage(int voltage)
    {
        this->voltage = voltage;
    }

    void circuit_breaker(bool circuit_breaker)
    {
        this->circuit_breaker = circuit_breaker;
    }

    void set_current(float current)
    {
        this->current = current;
    }

    bool is_working(bool is_working)
    {
        this->is_working = is_working;
    }

    int getvoltage()
    {
        return voltage;
    }

    bool getcircuit_breaker()
    {
        return circuit_breaker;
    }

    float getCurrent()
    {
        return current;
    }

    bool is_working()
    {
        return is_working;
    }
};
#endif //!__ELECTRICITY__H__
