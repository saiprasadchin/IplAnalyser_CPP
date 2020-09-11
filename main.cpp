#include<iostream>
#include "IplAnalyzer.cpp"
#include "InputOutput.h"
#include "SortBy.h"

using namespace std;

enum sortType
{
    BAT_AVERAGE = 1, BAT_STRIKE, SIX_AND_FOURS, SR_WITH_6sAND4s, AVERAGE_WITH_SR, RUNS_AVERAGE, TOP_BOWLER_AVERAGE, TOP_BOWLER_STRIKERATE, EXIT
};

string mostRunsFile = "MostRunsFile.csv";
string mostWktsFile = "MostWktsFile.csv";

void controller()
{
    IPLAnalyzer<IPLBatsmanCSV> iplBatsmanAnalyser;
    iplBatsmanAnalyser.loadIPLData( mostRunsFile );
    vector<IPLBatsmanCSV*> batsmatList;
    
    IPLAnalyzer<IPLBowlerCSV> iplBowlerAnalyser;
    iplBowlerAnalyser.loadIPLData( mostWktsFile );
    vector<IPLBowlerCSV*> bowlerList;

    InputOutput inputOutput;
    inputOutput.displayWelcomeMessage();

    bool endKey = true;
    while (endKey)
    {
        int choice = inputOutput.getUserChoice();
        switch ( choice )
        {
            case BAT_AVERAGE:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( batingAverage );
                inputOutput.displayToUser( batsmatList );
                break;
            case BAT_STRIKE:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( batingStrike );
                inputOutput.displayToUser( batsmatList );
                break;
            case SIX_AND_FOURS:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( foursAndSixes );
                inputOutput.displayToUser( batsmatList );
                break;
            case SR_WITH_6sAND4s:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( strikeWithfoursAndSixes );
                inputOutput.displayToUser( batsmatList );
                break;
            case AVERAGE_WITH_SR:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( strikeWithAverage );
                inputOutput.displayToUser( batsmatList );
                break;
            case RUNS_AVERAGE:
                batsmatList = iplBatsmanAnalyser.sortBatsManAndBowler( ransWithAverage );
                inputOutput.displayToUser( batsmatList );
                break;
            case TOP_BOWLER_AVERAGE:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( bowlingAverage );
                inputOutput.displayToUser( bowlerList );
                break;
            case TOP_BOWLER_STRIKERATE:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( bowlingStrikeRate );
                inputOutput.displayToUser( bowlerList );
                break;
            case EXIT:
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
