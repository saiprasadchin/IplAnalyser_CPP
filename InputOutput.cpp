#include "InputOutput.h"

using namespace std;
int InputOutput::getUserChoice()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) Top Bating Average \n2) Top Bating Strike \n3) Fours And Sixes \n4) SR with Fours And Sixes \n5) EXIT : ";
    cin >> choice;
    return choice;
}

void InputOutput::displayWelcomeMessage()
{
    cout << "\nWelcome to IplAnalyser Program\n" << endl;
}

void InputOutput::displayToUser( vector<MostRuns*> sortedList )
{
    for (auto i = sortedList.begin() + 1; i != sortedList.begin() + 2; ++i){
        cout<<"\n==================================="<<endl;
        (*i)->display();
    }
}