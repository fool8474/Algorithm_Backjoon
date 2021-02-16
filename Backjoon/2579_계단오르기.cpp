#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 계단오르기_2579()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* scores = new int[n];
	int* maxScore = new int[n];

	for (int i = 0; i < n; i++) cin >> scores[i];

	maxScore[0] = scores[0];
	maxScore[1] = max(scores[0] + scores[1], scores[1]);
	maxScore[2] = max(scores[0] + scores[2], scores[1] + scores[2]);

	for (int i = 3; i < n; i++)
	{
		maxScore[i] = max(maxScore[i - 3] + scores[i - 1] + scores[i], maxScore[i - 2] + scores[i]);
	}

	cout << maxScore[n - 1] << '\n';
}
