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

int MostRuns::convertToInt( string field )
{
    int sum = 0;
    for ( int i = 0; i < field.length(); i++ )
    {
        int digit = field[i];
        digit = digit - 48;
        sum =  sum * 10 + digit;
    }
    return sum;
}

double MostRuns::getAverage()
{
    return convertToDouble( batingAverage );
}

double MostRuns::getStrike()
{
    return convertToDouble( strikeRate );
}

int MostRuns::getFours()
{
    return convertToInt( fours );
}

int MostRuns::getSixes()
{
    return convertToInt( sixes );
}

int MostRuns::getFoursAndSixes()
{
    return getSixes() + getFours();
}

void MostRuns::display() {
    cout <<"Player Name   : " << this->playerName <<endl;
    cout <<"Bating Avg    : " << this->batingAverage <<endl;
    cout <<"Bating Strike : " << this->strikeRate <<endl;
    cout <<"Four And Six  : " << this->fours <<"  "<< this->sixes <<endl;
}