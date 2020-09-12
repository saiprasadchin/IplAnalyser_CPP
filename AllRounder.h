#pragma once
#include <iostream>
#include "IPLBatsmanCSV.h"
#include "IPLBowlerCSV.h"

using namespace std;

class AllRounder
{
    string player_name;
    double battingAverage, bowlingAverage;
    int runs, wickets, hundreds;

public:
    AllRounder(IPLBatsmanCSV *batsman, IPLBowlerCSV *bowler)
    {
        this->player_name = batsman->getPlayerName();
        this->battingAverage = batsman->getAverage();
        this->bowlingAverage = bowler->getAverage();
        this->runs = batsman->getRuns();
        this->wickets = bowler->getTolatWickets();
        this->hundreds = batsman->getHundreds();
    }
    void display()
    {
        cout << "Name            : " << this->player_name << endl;
        cout << "Batting Average : " << this->battingAverage << endl;
        cout << "Bowling Average : " << this->bowlingAverage << endl;
    }

    double getBatingAndBallingAverage()
    {
        return battingAverage + bowlingAverage;
    }
};