#pragma once
#include<string>
#include<iostream>

using namespace std;

class MostRuns
{
private:
    string POS;
    string playerName;
    string matches;
    string innings;
    string NO;
    string runs;
    string highScore;
    string batingAverage;
    string BF;
    string strikeRate;
    string centuries;
    string halfCenturies;
    string fours;
    string sixes;

public:
    MostRuns() {}
    string* getPosition();
    double convertToDouble( string );
    int convertToInt( string );
    double getAverage();
    double getStrike();
    int getFours();
    int getSixes();
    int getFoursAndSixes();
    void display();

};