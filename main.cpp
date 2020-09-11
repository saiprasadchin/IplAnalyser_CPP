#include<iostream>
#include "IplAnalyzer.cpp"
#include "InputOutput.h"
#include "SortBy.h"

using namespace std;

string FileName = "MostRunsFile.csv";

void controller()
{
    IPLAnalyzer iplAnalyser;
    InputOutput inputOutput;
    vector<MostRuns*> sortedList;
    inputOutput.displayWelcomeMessage();
    bool endKey = true;
    while (endKey)
    {
        int choice = inputOutput.getUserChoice();
        switch ( choice )
        {
            case 1:
                iplAnalyser.loadIPLData( FileName );
                sortedList = iplAnalyser.sortBatsMan( batingAverage );
                inputOutput.displayToUser( sortedList );
                break;
            case 2:
                iplAnalyser.loadIPLData( FileName );
                sortedList = iplAnalyser.sortBatsMan( batingStrike );
                inputOutput.displayToUser( sortedList );
                break;
            case 3:
                endKey = false;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }
}

int main()
{
    controller();
	return 0;
}
