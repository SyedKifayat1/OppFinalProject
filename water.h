#ifndef __WATER__H__
#define __WATER__H__
#include <iostream>
#include <string>
using namespace std;
class water
{
private:
    int water_usage;
    bool water_Supply;
    string water_quality;
    float water_pressure;

public:
    void setWaterUsage(int water_usage) // set water usage
    {
        this->water_usage = water_usage;
    }


    void setWaterSupply(bool water_supply) // checking water supply
    {
        this->water_Supply = water_supply;
    }
    void setwater_quality(string water_quality) // setting water quality
    {
        this->water_quality = water_quality;
    }
    void setwater_pressure(float water_pressure) // setting water pressure
    {
        this->water_pressure = water_pressure;
    }

    int getwater_usage() // return water usage
    {
        return water_usage;
    }
    bool getWater_supply() // return water supply
    {
        return water_Supply;
    }
    string getWater_quality() // return water quality
    {
        return water_quality;
    }
    float getWater_pressure() // return water pressure
    {
        return water_pressure;
    }
};
#endif //!__WATER__H__
