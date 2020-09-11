#include "MostRuns.h"

bool compareByAverage(MostRuns *avg1, MostRuns *avg2) 
{ 
    return avg1->getAverage() > avg2->getAverage();
}

auto batingAverage = &compareByAverage;

bool compareByStrikeRate(MostRuns *avg1, MostRuns *avg2) 
{ 
    return avg1->getStrike() > avg2->getStrike();
}

auto batingStrike = &compareByStrikeRate;

bool compareByFourAndSix(MostRuns *avg1, MostRuns *avg2) 
{ 
    return avg1->getFoursAndSixes() > avg2->getFoursAndSixes();
}

auto foursAndSixes = &compareByFourAndSix;