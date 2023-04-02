#ifndef __REPAIRING__H__
#define __REPAIRING__H__

#include <iostream>
#include <string>
using namespace std;

class Repairing
{
protected:
    string issueDescription;
    string repairType;
    int repairCost;

public:
    void setIssueDescription(string description)
    {
        issueDescription = description;
    }

    string getIssueDescription()
    {
        return issueDescription;
    }

    void setRepairType(string type)
    {
        repairType = type;
    }

    string getRepairType()
    {
        return repairType;
    }

    void setRepairCost(int cost)
    {
        repairCost = cost;
    }

    int getRepairCost()
    {
        return repairCost;
    }
};

#endif //!__REPAIRING__H__
