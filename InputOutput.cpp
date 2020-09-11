#include "InputOutput.h"

using namespace std;
int InputOutput::getUserChoice()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) Top Bating Average \n2) Top Bating Strike \n3) EXIT : ";
    cin >> choice;
    return choice;
}

void InputOutput::displayWelcomeMessage()
{
    cout << "\nWelcome to IplAnalyser Program\n" << endl;
}

void InputOutput::displayToUser( vector<MostRuns*> sortedList )
{
    for (auto i = sortedList.begin(); i != sortedList.begin() + 1; ++i){
        cout<<"==================================="<<endl;
        (*i)->display();
    }
}