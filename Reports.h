#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Report
{

public:
    Report()
    {
        ReportStatus = false;
    }
    bool ReportStatus;
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
        ifstream file(filename + ".txt");
        if (!file.is_open())
        {
            cout << "\nSORRY NO FILE OR DATA EXIST!\n";
        }
        else
        {
            string read;
            while (getline(file, read))
            {
                cout << read << endl;
            }
        }
        ofstream outfile(filename + ".txt", ios::app);
        string new_content;
        cout << "\nWRITE A MORE DETAILS IN REPORT :\n";
        getline(cin, new_content);
        outfile << new_content;
        cout << "\nREPORT SUCCESSFULLY UPDATED.......\n";
    }
    void ReadReport(string filename)
    {
        ifstream file(filename + ".txt");
        if (!file.is_open())
        {
            cout << "\nSorry Your File iS Not Exist\n";
        }
        else
        {
            string read;
            while (getline(file, read))
            {
                cout << read << endl;
            }
        }
    }
    void ReportsStatus()
    {
        if (ReportStatus == true)
        {
            cout << "\nCongraulation Your Report Is Approved....\n";
        }
        else
        {
            cout << "\nYour Report Is In Panding Or Under Observation.....\n";
        }
    }
    void ReadResponse(string filename)
    {
        ifstream file(filename+".txt");
        if(!file.is_open())
        {
            cout<<"\nNo Response Is Found!\n";
        }
        else
        {
            string read;
            while (getline(file,read))
            {
                cout<<read<<endl;
            }
            
        }
    }
    void WriteResponse(string filename)
    {
        ofstream outfile(filename + ".txt");
        string input;
        cout << "\nGive Your Response :\n";
        getline(cin, input);
        outfile << input;
    }
};