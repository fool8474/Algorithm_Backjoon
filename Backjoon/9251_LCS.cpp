#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

// �׸��� �׷��� �ϸ� ���� ����, DP�� ���
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

	// ���ϴ� ��ġ�� ���ڰ� ���� ������ �� ��ġ �� = ���� �밢�� �� + 1
	// �ٸ��� �� ��ġ �� = MAX(���� ��, ���� ��)

	cout << dp[s1.length()][s2.length()];
}
