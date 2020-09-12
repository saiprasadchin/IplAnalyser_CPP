#pragma once
#include <iostream>
#include "IPLBatsmanCSV.h"
#include "IPLBowlerCSV.h"

using namespace std;

class AllRounder
{
    string playerName;
    double battingAverage, bowlingAverage;
    int runs, wickets, hundreds;

public:
    AllRounder(IPLBatsmanCSV *batsman, IPLBowlerCSV *bowler)
    {
        this->playerName = batsman->getPlayerName();
        this->battingAverage = batsman->getAverage();
        this->bowlingAverage = bowler->getAverage();
        this->runs = batsman->getRuns();
        this->wickets = bowler->getTolatWickets();
        this->hundreds = batsman->getHundreds();
    }
    void display()
    {
        cout << "Name            : " << this->playerName << endl;
        cout << "Batting Average : " << this->battingAverage << endl;
        cout << "Bowling Average : " << this->bowlingAverage << endl;
    }

    double getBatingAndBallingAverage()
    {
        return battingAverage + bowlingAverage;
    }

    int getRuns()
    {
        return runs;
    }
    
    int getWickets()
    {
        return wickets;
    }
};