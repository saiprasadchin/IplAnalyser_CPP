#pragma once
#include<string>
#pragma once
#include<string>
#include<iostream>

using namespace std;

class IPLBowlerCSV
{
private:
    string POS;
    string playerName;
    string matches;
    string innings;
    string overs;
    string runs;
    string totalWickets;
    string BBI;
    string average;
    string Economy;
    string strikeRate;
    string fourWickets;
    string fiveWickets;

public:
    IPLBowlerCSV() {}
    string* getPosition();
    double convertToDouble( string );
    int convertToInt( string );
    double getAverage();
    double getStrikeRate();
    double getEconomy();
    int getFourWickets();
    int getFiveWickets();
    int getFourAndFiveWickets();
    int getTolatWickets();
    double getStrikeRateAndFoursFives();
    void display();
};