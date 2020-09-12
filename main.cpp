#include<iostream>
#include "IplAnalyzer.cpp"
#include "InputOutput.h"
#include "SortBy.h"

using namespace std;

enum sortType
{
    BAT_AVERAGE = 1, BAT_STRIKE, SIX_AND_FOURS, SR_WITH_6sAND4s, AVERAGE_WITH_SR, RUNS_AVERAGE, TOP_BOWLER_AVERAGE, TOP_BOWLER_STRIKERATE, BOWLER_ECONOMY, STRIKE_RATE_WITH_FOURS_FIVE_WKT, BOWLER_STRIKERATE_AVERAGE, WICKETS_AVERAGE, AllROUNDER_BAT_BAL_AVERAGE, EXIT
};

string mostRunsFile = "MostRunsFile.csv";
string mostWktsFile = "MostWktsFile.csv";

vector<AllRounder* > getAllRounderData( IPLAnalyzer<IPLBatsmanCSV> batsAnalyser, IPLAnalyzer<IPLBowlerCSV> ballAnalyser )
{
    vector<IPLBatsmanCSV*> batsmanData = batsAnalyser.findAll();
    vector<IPLBowlerCSV*> bowlerData = ballAnalyser.findAll();
    vector<AllRounder*> allRounderList;
    for (auto iterator = batsmanData.begin() + 1; iterator != batsmanData.end(); iterator++)
    {
        for (auto itr = bowlerData.begin() + 1; itr != bowlerData.end(); itr++)
        {
            if ((*iterator)->getPlayerName() == (*itr)->getPlayerName()) {
                AllRounder* allRounder = new AllRounder(*iterator, *itr); 
                allRounderList.push_back(allRounder);
            }
        }
    }
    return allRounderList;
}

void controller()
{
    IPLAnalyzer<IPLBatsmanCSV> iplBatsmanAnalyser;
    iplBatsmanAnalyser.loadIPLData( mostRunsFile );
    vector<IPLBatsmanCSV*> batsmatList;
    
    IPLAnalyzer<IPLBowlerCSV> iplBowlerAnalyser;
    iplBowlerAnalyser.loadIPLData( mostWktsFile );
    vector<IPLBowlerCSV*> bowlerList;

    vector<AllRounder*> allRounderList;
    allRounderList = getAllRounderData( iplBatsmanAnalyser, iplBowlerAnalyser);
    IPLAnalyzer<AllRounder> iplAllRounderAnalyser;
    iplAllRounderAnalyser.loadIPLData( allRounderList );

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
            case BOWLER_ECONOMY:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( bowlingEconomy );
                inputOutput.displayToUser( bowlerList );
                break;
            case STRIKE_RATE_WITH_FOURS_FIVE_WKT:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( strikeRate4sAnd5sWkt );
                inputOutput.displayToUser( bowlerList );
                break;
            case BOWLER_STRIKERATE_AVERAGE:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( strikeRateAverage );
                inputOutput.displayToUser( bowlerList );
                break;
            case WICKETS_AVERAGE:
                bowlerList = iplBowlerAnalyser.sortBatsManAndBowler( wicketsAverage );
                inputOutput.displayToUser( bowlerList );
                break;
            case AllROUNDER_BAT_BAL_AVERAGE:
                allRounderList = iplAllRounderAnalyser.sortBatsManAndBowler( allRounderBatingBallingAverage );
                inputOutput.displayToUser( allRounderList );
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
