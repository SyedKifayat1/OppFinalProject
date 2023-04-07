#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Report
{
protected:
    bool ReportStatus;

public:
    Report() // report default constructor
    {
        ReportStatus = false;
    }
    bool getReportStatus()
    {
        return ReportStatus;
    }
    void setReportStatus(bool status)
    {
        ReportStatus=status;
    }
    // Add_ report
    void Add_report(string filename) // file name is input from main program
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

    // delete report function
    void Delete_report(string filename)
    {
        if (remove((filename + ".txt").c_str()) != 0) // The c_str() function converts the resulting string to a C-style string, which is required by the remove() function
        {
            cout << "\nError In Deleting File!\n";
        }
        else
        {
            cout << "\nFile Is Successfully Deleted\n";
        }
    }

    // Edit report function

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
            cout << "\nWrite A More Details In Report :\n";
            cin.ignore();
            getline(cin, add_content);
            outfile << add_content << endl;
            cout << "\nReport Successfully Updated.......\n";
        }
        outfile.close();
    }

    // readreport
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

    // reposrt status
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
            outfile << input << endl;
        }
        outfile.close();
    }
};