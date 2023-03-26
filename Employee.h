#include <iostream>
#include <string>
using namespace std;
#include "fstream"
#include "Detail.h"

class Employ : public Detail
{

public:
    Employ *ptr;
    // Employ() : Detail()
    // {
    void input_Data()
    {

        int p;
        cout << "ENTER SIZE OF EMPLOY: ";
        cin >> p;

        Employ *ptr = new Employ[p];
        for (int i = 0; i < p; i++)
        {
            cin >> ptr[i];
            ptr[i].input_Date("security");
        }
    };

    void Remove_employ()
    {
        ptr->Remove_Employee("security");
    }

    void Replace_Employ()
    {
        ptr->Replace_employ("security");
    }

    void Total_employee_Details()
    {
        ifstream file("security.txt");
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
        }
        else
        {
            cerr << "Failed to open file." << endl;
            // return 1;
        }
    }
}

;