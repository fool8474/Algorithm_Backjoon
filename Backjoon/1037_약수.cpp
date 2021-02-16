#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void ¾à¼ö_1037()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n = 0; cin >> n;
    vector<int> ints = vector<int>();
    for (int i = 0; i < n; i++)
    {
        int k = 0; cin >> k;
        ints.push_back(k);
    }

    sort(ints.begin(), ints.end());
    cout << ints[0] * ints[ints.size() - 1] << endl;
}