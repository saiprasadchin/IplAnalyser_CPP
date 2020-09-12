#include<iostream>
#include<vector>
#include "IPLBatsmanCSV.h"
#include "IPLBowlerCSV.h"
#include "AllRounder.h"
#include "CsvFileOperation.cpp"
#include <algorithm>

using namespace std;

template <class T>
class IPLAnalyzer
{
private:
    vector<T*> statisticList;
public:
    IPLAnalyzer() {}

    void loadIPLData( string csvFilePath )
    {
        CsvFileOperation<T> csvObj;
        statisticList = csvObj.readDataFromFile( csvFilePath );
    }
    
    vector<T*> sortBatsManAndBowler( bool(*sortFunc )(T*, T*) )
    {
        vector<T*> sortedList = statisticList;
        sort(sortedList.begin() + 1, sortedList.end(), sortFunc );
        return sortedList;
    }

    void loadIPLData( vector<T*> List )
    {
        statisticList = List;
    }

    vector<T*> findAll()
    {
        return statisticList;
    }
};