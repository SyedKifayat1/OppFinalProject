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
    void checkEquipment()
    {
        cout << "CHECKING CURRENT STATE OF EQUIPMENT\n";
    }

    void fixEquipment()
    {
    }

    void setVoltage(int voltage)
    {
        this->voltage = voltage;
    }

    void setCircuitBreaker(bool circuit)
    {
        this->circuit_breaker = circuit;
    }

    void setCurrent(float current)
    {
        this->current = current;
    }

    void setIsWorking(bool isWorking)
    {
        this->is_working = isWorking;
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

    bool getIsWorking()
    {
        return is_working;
    }
};
#endif //!__ELECTRICITY__H__
