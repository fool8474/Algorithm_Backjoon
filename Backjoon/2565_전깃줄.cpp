#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

static bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}

void Àü±êÁÙ_2565()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	vector<pair<int, int>> pairs = vector<pair<int, int>>();
	int* dp = new int[n];

	int a, b;
	for (int i = 0; i < n; i++)
	{
		pair<int, int> curPair = pair<int, int>();
		dp[i] = 1;
		cin >> a >> b;
		curPair.first = a;
		curPair.second = b;
		pairs.push_back(curPair);
	}

	sort(pairs.begin(), pairs.end(), compare);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (pairs[j].second < pairs[i].second)
			{
				dp[i] = max(dp[i] ,dp[j] + 1);
			}
		}
	}

	int max = -1;
	for (int i = 0; i < n; i++)
	{
		if (dp[i] > max) max = dp[i];
	}

	cout << n - max;
}
