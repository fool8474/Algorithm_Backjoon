#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

pair<int, int> operator+ (pair<int, int> first, pair<int, int> second)
{
	int x = first.first + second.first;
	int y = first.second + second.second;
	return pair<int,int>(x, y);
}

ostream& operator<<(ostream& os, const pair<int, int>& target)
{
	os << target.first << ' ' << target.second;
	return os;
}

void 피보나치함수_1003()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	vector<pair<int,int>> dp;
	dp.push_back(pair<int,int>(1, 0));
	dp.push_back(pair<int, int>(0, 1));

	int n; cin >> n;
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		int k; cin >> k;
		for (int j = 2; j <= k; j++)
		{
			if (dp.size() <= j) dp.push_back(dp[j - 1] + dp[j - 2]);
			else continue;
		}

		cout << dp[k] << '\n';
	}
}
