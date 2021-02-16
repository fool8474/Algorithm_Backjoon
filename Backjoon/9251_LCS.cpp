#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

// 그림을 그려서 하면 좋은 문제, DP를 사용
void LCS_9251()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	string s1; string s2; cin >> s1 >> s2;
	int dp[1001][1001];
	int ans = 0;

	for (int i = 0; i <= s1.length(); i++) for (int j = 0; j <= s2.length(); j++) dp[i][j] = 0;
	for (int i = 1; i <= s1.length(); i++)
	{
		for (int j = 1; j <= s2.length(); j++)
		{
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	// 비교하는 위치의 문자가 서로 같으면 현 위치 값 = 왼쪽 대각선 값 + 1
	// 다르면 현 위치 값 = MAX(왼쪽 값, 위쪽 값)

	cout << dp[s1.length()][s2.length()];
}
