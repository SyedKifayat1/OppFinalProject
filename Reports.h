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
        if (!outfile.is_open())
        {
            cout << "\nFile Opening Error!\n";
        }
        else
        {
            string in;
            cout << "Write Your Report Here :\n";
            cin.ignore();
            getline(cin, in);
            outfile << in << endl;
        }
        outfile.close();
    }

    void Delete_report(string filename)
    {
        if (remove((filename + ".txt").c_str()) != 0)
        {
            cout << "\nError In Deleting File!\n";
        }
        else
        {
            cout << "\nFile Is Successfully Deleted\n";
        }
    }

    void Edit_report(string filename)
    {
        ifstream file(filename + ".txt");
        if (!file.is_open())
        {
            cout << "\nSorry No File Or Data Exist!\n";
        }
        else
        {
            string read;
            while (getline(file, read))
            {
                cout << read << endl;
            }
        }
        file.close();
        ofstream outfile(filename + ".txt", ios::app);
        if (!outfile.is_open())
        {
            cout << "\nSorry File Opening Error!\n";
        }
        else
        {
            string add_content;
            cout << "\nWRITE A MORE DETAILS IN REPORT :\n";
            cin.ignore();
            getline(cin, add_content);
            outfile<< add_content << endl;
            cout << "\nREPORT SUCCESSFULLY UPDATED.......\n";
        }
        outfile.close();
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
        file.close();
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
        ifstream file(filename + ".txt");
        if (!file.is_open())
        {
            cout << "\nNo Response Is Found!\n";
        }
        else
        {
            string read;
            while (getline(file, read))
            {
                cout << read << endl;
            }
        }
        file.close();
    }
    void WriteResponse(string filename)
    {
        ofstream outfile(filename + ".txt");
        if (!outfile.is_open())
        {
            cout << "\nSorry File Opening Error!\n";
        }
        else
        {
            string input;
            cout << "\nGive Your Response :\n";
            cin.ignore();
            getline(cin, input);
            outfile << input<<endl;
        }
        outfile.close();
    }
};