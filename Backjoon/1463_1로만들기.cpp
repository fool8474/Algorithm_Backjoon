#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 일로만들기_1463()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	
	int* mins = new int[n];

	mins[1] = 0;

	for (int i = 2; i <= n; i++)
	{
		mins[i] = 99999;
		if (i % 2 == 0) mins[i] = mins[i / 2] + 1;
		if (i % 3 == 0) mins[i] = min(mins[i], mins[i / 3] + 1);
		mins[i] = min(mins[i], mins[i - 1] + 1);
	}
	
	cout << mins[n];
}
