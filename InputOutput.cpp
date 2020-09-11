#include "InputOutput.h"

using namespace std;
int InputOutput::getUserChoice()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) Top Bating Average \n2) Top Bating Strike \n3) Fours And Sixes \n4) SR with Fours And Sixes \n5) Average With Strike \n6) Runs With Average \n7) Top Bolling Average \n8) Top Bolling Strike \n9) Economy \n10) EXIT : ";
    cin >> choice;
    return choice;
}

void InputOutput::displayWelcomeMessage()
{
    cout << "\nWelcome to IplAnalyser Program\n" << endl;
}

void InputOutput::displayToUser( vector<IPLBatsmanCSV*> batsmatList )
{
    for (auto i = batsmatList.begin() + 1; i != batsmatList.begin() + 2; ++i){
        cout<<"\n==================================="<<endl;
        (*i)->display();
    }
}

void InputOutput::displayToUser( vector<IPLBowlerCSV*> bowlerList )
{
    for (auto i = bowlerList.begin() + 1; i != bowlerList.begin() + 2; ++i){
        cout<<"\n==================================="<<endl;
        (*i)->display();
    }
}