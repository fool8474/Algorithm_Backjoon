#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void ¿¬¼ÓÇÕ_1912()
{
    ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
    int n; cin >> n;
    int* k = new int[n];
    int* dp = new int[n];

    for (int i = 0; i < n; i++) cin >> k[i];
    dp[0] = k[0];

    int maxResult = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + k[i], k[i]);
        if (maxResult < dp[i]) maxResult = dp[i];
    }

    cout << maxResult;
}
