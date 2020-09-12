#include "IPLBatsmanCSV.h"

bool compareByAverage(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return avg1->getAverage() > avg2->getAverage();
}

auto batingAverage = &compareByAverage;

bool compareByStrikeRate(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return avg1->getStrike() > avg2->getStrike();
}

auto batingStrike = &compareByStrikeRate;

bool compareByFourAndSix(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return avg1->getFoursAndSixes() > avg2->getFoursAndSixes();
}

auto foursAndSixes = &compareByFourAndSix;

bool compareByStrikeRtWithFourAndSix(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return (avg1->getFoursAndSixes() > avg2->getFoursAndSixes()) && (avg1->getStrike() > avg2->getStrike());
}

auto strikeWithfoursAndSixes = &compareByStrikeRtWithFourAndSix;

bool compareByStrikeRtWithAverage(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return (avg1->getAverage() > avg2->getAverage()) && (avg1->getStrike() > avg2->getStrike());
}

auto strikeWithAverage = &compareByStrikeRtWithAverage;

bool compareByMaxRunsWithAverage(IPLBatsmanCSV *avg1, IPLBatsmanCSV *avg2) 
{ 
    return (avg1->getRuns() > avg2->getRuns()) && (avg1->getAverage() > avg2->getAverage());
}

auto ransWithAverage = &compareByMaxRunsWithAverage;

bool compareByBowlingAverage(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getAverage() > avg2->getAverage();
}

auto bowlingAverage = &compareByBowlingAverage;

bool compareByBowlingStrikeRate(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getStrikeRate() > avg2->getStrikeRate();
}

auto bowlingStrikeRate = &compareByBowlingStrikeRate;

bool compareByBowlingEconomy(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getEconomy() < avg2->getEconomy();
}

auto bowlingEconomy = &compareByBowlingEconomy;

bool compareByBowlerStrikeRate4sAnd5swkt(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getStrikeRateAndFoursFives() > avg2->getStrikeRateAndFoursFives();
}

auto strikeRate4sAnd5sWkt = &compareByBowlerStrikeRate4sAnd5swkt;

bool compareByBowlerStrikeRateAndAverage(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getStrikeRateAverage() > avg2->getStrikeRateAverage();
}

auto strikeRateAverage = &compareByBowlerStrikeRateAndAverage;

bool compareByBowlerWicketsWithAverage(IPLBowlerCSV *avg1, IPLBowlerCSV *avg2) 
{ 
    return avg1->getWicketsWithAverage() > avg2->getWicketsWithAverage();
}

auto wicketsAverage = &compareByBowlerWicketsWithAverage;