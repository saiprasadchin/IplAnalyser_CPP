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

bool compareByStrikeRtWithFourAndSix(MostRuns *avg1, MostRuns *avg2) 
{ 
    return (avg1->getFoursAndSixes() > avg2->getFoursAndSixes()) && (avg1->getStrike() > avg2->getStrike());
}

auto strikeWithfoursAndSixes = &compareByStrikeRtWithFourAndSix;

bool compareByStrikeRtWithAverage(MostRuns *avg1, MostRuns *avg2) 
{ 
    return (avg1->getAverage() > avg2->getAverage()) && (avg1->getStrike() > avg2->getStrike());
}

auto strikeWithAverage = &compareByStrikeRtWithAverage;