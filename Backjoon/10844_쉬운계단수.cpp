#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 쉬운계단수_10844()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	long long scoreN[10] = {0,1,1,1,1,1,1,1,1,1};
	long long prevScoreN[10] = { 0, };

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scoreN[j] = scoreN[j] % 1000000000;
			prevScoreN[j] = scoreN[j];
		}
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) scoreN[j] = prevScoreN[j + 1];
			else if (j == 9) scoreN[j] = prevScoreN[j - 1];
			else scoreN[j] = prevScoreN[j - 1] + prevScoreN[j + 1];
		}
	}

	long long max = 0;
	for (int i = 0; i < 10; i++)
	{
		max += scoreN[i];
	}

	if (n == 0) cout << 0 << endl;
	else cout << max % 1000000000 << endl;
}
