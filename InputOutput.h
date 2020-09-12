#pragma once
#include<iostream>
#include<vector>
#include "IPLBatsmanCSV.h"
#include "IPLBowlerCSV.h"
#include "AllRounder.h"

using namespace std;

class InputOutput {
public:
    int getUserChoice();
    void displayWelcomeMessage();
    void displayToUser( vector<IPLBatsmanCSV*> );
    void displayToUser( vector<IPLBowlerCSV*> );
    void displayToUser( vector<AllRounder*> );
};