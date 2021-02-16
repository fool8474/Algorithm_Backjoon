#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

int factorial(int i)
{
    if (i == 1) return 1;
    return i * factorial(i - 1);
}

void 이항계수1_11050()
{
    ios::sync_with_stdio(0); cin.tie(0);

    int n, k; cin >> n >> k;
        
    cout << factorial(n) / (factorial(k) * factorial(n - k));
}