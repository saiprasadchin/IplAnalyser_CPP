#include<iostream>
#include<vector>
#include "MostRuns.h"
#include "CsvFileOperation.cpp"
#include <algorithm>

using namespace std;

class IPLAnalyzer
{
private:
    vector<MostRuns*> statisticList;
public:
    IPLAnalyzer() {}

    void loadIPLData( string csvFilePath )
    {
        CsvFileOperation<MostRuns> csvObj;
        statisticList = csvObj.readDataFromFile( csvFilePath );
    }
    
    vector<MostRuns*> sortBatsMan( bool(*sortFunc )(MostRuns*, MostRuns*) )
    {
        vector<MostRuns*> sortedList = statisticList;
        sort(sortedList.begin(), sortedList.end(), sortFunc );
        return sortedList;
    }
};