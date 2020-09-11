#include "IPLBowlerCSV.h"

string* IPLBowlerCSV::getPosition()
{
    return &POS;
}

double IPLBowlerCSV::convertToDouble( string field )
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

double IPLBowlerCSV::getAverage()
{
    return convertToDouble( average );
}

void IPLBowlerCSV::display()
{
    cout <<"Player Name    : " << this->playerName <<endl;
    cout <<"Bowling Avg    : " << this->average <<endl;
    //cout <<"Bating Strike : " << this->strikeRate <<endl;
    //cout <<"Four And Six  : " << this->fours <<"  "<< this->sixes <<endl;
    //cout <<"Runs          : " << this->runs <<endl;
}