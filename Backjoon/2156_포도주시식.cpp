#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 포도주시식_2156()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* score = new int[n];
	int* maxScore = new int[n];
	for (int i = 0; i < n; i++) cin >> score[i];
	
	maxScore[0] = score[0];
	maxScore[1] = score[0] + score[1];
	maxScore[2] = score[0] + score[2];

	for (int i = 3; i < n; i++)
	{
		maxScore[i] = max(maxScore[i-3] + score[i-1], maxScore[i-2]) + score[i];
		maxScore[i] = max(maxScore[i], maxScore[i - 1]);
	}

	int mMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (mMax < maxScore[i]) mMax = maxScore[i];
	}

	cout << mMax << '\n';
}
