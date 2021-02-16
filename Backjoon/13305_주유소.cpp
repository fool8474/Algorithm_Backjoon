#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void ÁÖÀ¯¼Ò_13305()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int numOfCity; cin >> numOfCity;
    long* distance = new long[numOfCity - 1];
    long* price = new long[numOfCity];
    for (int i = 0; i < numOfCity - 1; i++) cin >> distance[i];
    for (int i = 0; i < numOfCity; i++) cin >> price[i];

    long currentPrice = 0;
    long curDis = 0;
    long minPrice = price[0];
    for (int i = 0; i < numOfCity-1; i++)
    {
        curDis += distance[i];
        if (price[i + 1] <= minPrice)
        {
            currentPrice += curDis * minPrice;
            curDis = 0;
            minPrice = price[i + 1];
        }
    }

    currentPrice += curDis * minPrice;

    cout << currentPrice << endl;
}