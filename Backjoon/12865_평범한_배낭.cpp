#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


void Æò¹üÇÑ_¹è³¶_12865()
{
    int N = 0, K = 0, item[102][2], dp[102][100003];

    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> item[i][0] >> item[i][1];
    }

    for (int i = 0; i < 102; i++)
    {
        for (int j = 0; j < 100003; j++)
        {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        int weight = item[i][0], val = item[i][1];
        for (int j = 0; j <= K; j++)
        {
            if (j < item[i][0]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight] + val);
        }
    }

    cout << dp[N][K];
}