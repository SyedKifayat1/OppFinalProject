#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Report
{

public:
    void Add_report(string filename)
    {
        ofstream outfile(filename + ".txt");
        string in;
        cout << "WRITE A REPORT \n";
        getline(cin, in);
        outfile << in;
    }

    void Delete_report(string filename)
    {
        if (remove((filename + ".txt").c_str()) != 0)
            cout << "Error deleting file\n";
        else
            cout << "File successfully deleted\n";
    }

    void Edit_report(string filename)
    {
        ofstream outfile(filename + ".txt");
        string new_content;
        cout << "WRITE A NEW REPORT\n";
        getline(cin, new_content);
        outfile << new_content;
        cout << "REPORT SUCCESSFULLY UPDATED\n";
    }
};