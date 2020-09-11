#pragma once
#include<iostream>
#include<vector>
#include "MostRuns.h"

using namespace std;

class InputOutput {
public:
    int getUserChoice();
    void displayWelcomeMessage();
    void displayToUser( vector<MostRuns*> );
};