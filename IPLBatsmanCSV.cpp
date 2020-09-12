#include "IPLBatsmanCSV.h"

string* IPLBatsmanCSV::getPosition()
{
    return &POS;
}

string IPLBatsmanCSV::getPlayerName()
{
    return playerName;
}

double IPLBatsmanCSV::convertToDouble( string field )
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

int IPLBatsmanCSV::convertToInt( string field )
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

double IPLBatsmanCSV::getAverage()
{
    return convertToDouble( batingAverage );
}

double IPLBatsmanCSV::getStrike()
{
    return convertToDouble( strikeRate );
}

int IPLBatsmanCSV::getFours()
{
    return convertToInt( fours );
}

int IPLBatsmanCSV::getSixes()
{
    return convertToInt( sixes );
}

int IPLBatsmanCSV::getFoursAndSixes()
{
    return getSixes() + getFours();
}

int IPLBatsmanCSV::getRuns()
{
    return convertToInt( runs );
}

int IPLBatsmanCSV::getHundreds()
{
    return convertToInt( centuries );
}
void IPLBatsmanCSV::display()
{
    cout <<"Player Name   : " << this->playerName <<endl;
    cout <<"Bating Avg    : " << this->batingAverage <<endl;
    cout <<"Bating Strike : " << this->strikeRate <<endl;
    cout <<"Four And Six  : " << this->fours <<"  "<< this->sixes <<endl;
    cout <<"Runs          : " << this->runs <<endl;
}