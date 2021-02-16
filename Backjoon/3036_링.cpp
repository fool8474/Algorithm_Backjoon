#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}

void ¸µ_3036()
{
    ios::sync_with_stdio(0); cin.tie(0);
   
    int n, first; cin >> n >> first;
    for (int i = 0; i < n - 1; i++)
    {
        int k; cin >> k;
        int maxDiv = gcd(first, k);
        cout << first / maxDiv << "/" << k / maxDiv << '\n';
    }
}