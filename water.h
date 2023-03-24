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
