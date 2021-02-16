#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool compareKaigishitsu(pair<long long, long long> i, pair <long long, long long> i2)
{
    if (i.second < i2.second) return true;
    else if (i.second == i2.second) if (i.first < i2.first) return true;
    
    return false;
}

void 회의실_배정_1931()
{
    ios::sync_with_stdio(0); cin.tie(0);

    int num; cin >> num;
    vector<pair<long long, long long>> pairs = vector<pair<long long, long long >>();

    for (int i = 0; i < num; i++)
    {
        pair<long long, long long> p = pair<long long, long long>();
        cin >> p.first >> p.second;
        pairs.push_back(p);
    }
        
    sort(pairs.begin(), pairs.end(), compareKaigishitsu);

    int count = 0;
    long long minNum1 = 9223372036854775807;
    long long minNum2 = -1;
    for (int i = 0; i < num; i++)
    {
        if (minNum2 <= pairs[i].first)
        {
            count++;
            minNum1 = pairs[i].first;
            minNum2 = pairs[i].second;
        }
    }

    cout << count << '\n';
}