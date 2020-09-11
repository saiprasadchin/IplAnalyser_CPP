#include "MostRuns.h"

bool compareByAverage(MostRuns *avg1, MostRuns *avg2) 
{ 
    return avg1->getAverage() > avg2->getAverage();
}

auto batingAverage = &compareByAverage;