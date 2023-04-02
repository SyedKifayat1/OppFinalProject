#ifndef __PLUMBING__H__
#define __PLUMBING__H__

#include <iostream>
#include <string>
using namespace std;

class Plumbing
{
protected:
    int pipesCount;
    string pipeMaterial;
    bool isLeaking;

public:
    void setPipesCount(int count)
    {
        pipesCount = count;
    }

    int getPipesCount()
    {
        return pipesCount;
    }

    void setPipeMaterial(string material)
    {
        pipeMaterial = material;
    }

    string getPipeMaterial()
    {
        return pipeMaterial;
    }

    void setIsLeaking(bool leaking)
    {
        isLeaking = leaking;
    }

    bool getIsLeaking()
    {
        return isLeaking;
    }
};

#endif //!__PLUMBING__H__
