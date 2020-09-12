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

int IPLBowlerCSV::convertToInt( string field )
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
double IPLBowlerCSV::getAverage()
{
    return convertToDouble( average );
}

double IPLBowlerCSV::getStrikeRate()
{
    return convertToDouble( strikeRate );
}

double IPLBowlerCSV::getEconomy()
{
    return convertToDouble( Economy );
}

int IPLBowlerCSV::getFourWickets()
{
    return convertToInt( fourWickets );
}

int IPLBowlerCSV::getFiveWickets()
{
    return convertToInt( fiveWickets );
}

int IPLBowlerCSV::getFourAndFiveWickets()
{
    return getFourWickets() + getFiveWickets();
}

int IPLBowlerCSV::getTolatWickets()
{
    return convertToInt( totalWickets );
}

double IPLBowlerCSV::getStrikeRateAndFoursFives()
{
    return getStrikeRate() * getFourAndFiveWickets();
}

double IPLBowlerCSV::getStrikeRateAverage()
{
    return getStrikeRate() + getAverage();
}

void IPLBowlerCSV::display()
{
    cout <<"Player Name    : " << this->playerName <<endl;
    cout <<"Bowling Avg    : " << this->average <<endl;
    cout <<"Bowling Strike : " << this->strikeRate <<endl;
    cout <<"Economy        : " << this->Economy <<endl;
    cout <<"Four wkts      : " << this->fourWickets <<endl;
    cout <<"Five wkts      : "<< this->fiveWickets <<endl;
}