#include "MostRuns.h"

string* MostRuns::getPosition()
{
    return &POS;
}

double MostRuns::convertToDouble( string field )
{
    int sum = 0;
    double decimal = 0.1;
    for ( int i = 0; i < field.length(); i++ )
    {
        if( field[i] != '.' ) {
            int digit = field[i];
            digit = digit - 48;
            sum =  sum * 10 + digit;
            decimal = decimal * 10;
        } else {
            decimal = 1;
        }
    }
        return decimal = sum/decimal;
}


double MostRuns::getAverage()
{
    return convertToDouble( batingAverage );
}

double MostRuns::getStrike()
{
    return convertToDouble( strikeRate );
}

void MostRuns::display() {
    cout << this->playerName <<endl;
    cout << this->batingAverage <<endl;
    cout << this->strikeRate <<endl;
}