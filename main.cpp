#include<iostream>
#include "IplAnalyzer.cpp"
#include "InputOutput.h"
#include "SortBy.h"

using namespace std;

enum sortType
{
    BAT_AVERAGE = 1, BAT_STRIKE, SIX_AND_FOURS, SR_WITH_6sAND4s, AVERAGE_WITH_SR
};

string FileName = "MostRunsFile.csv";

void controller()
{
    IPLAnalyzer iplAnalyser;
    InputOutput inputOutput;
    vector<MostRuns*> sortedList;
    iplAnalyser.loadIPLData( FileName );
    inputOutput.displayWelcomeMessage();
    bool endKey = true;
    while (endKey)
    {
        int choice = inputOutput.getUserChoice();
        switch ( choice )
        {
            case BAT_AVERAGE:
                sortedList = iplAnalyser.sortBatsMan( batingAverage );
                break;
            case BAT_STRIKE:
                sortedList = iplAnalyser.sortBatsMan( batingStrike );
                break;
            case SIX_AND_FOURS:
                sortedList = iplAnalyser.sortBatsMan( foursAndSixes );
                break;
            case SR_WITH_6sAND4s:
                sortedList = iplAnalyser.sortBatsMan( strikeWithfoursAndSixes );
                break;
            case AVERAGE_WITH_SR:
                sortedList = iplAnalyser.sortBatsMan( strikeWithAverage );
                break;
            case 6:
                endKey = false;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
        inputOutput.displayToUser( sortedList );
    }
}

int main()
{
    controller();
	return 0;
}
