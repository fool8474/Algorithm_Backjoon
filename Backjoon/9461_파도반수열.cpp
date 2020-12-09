#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 파도반수열_9461()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* dps = new int[n];
	int max = -1;
	for (int i = 0; i < n; i++) 
	{
		cin >> dps[i];
		if (max < dps[i]) max = dps[i];
	}
	long long* results = new long long[max];
	results[0] = 1; results[1] = 1; results[2] = 1;
	for (int i = 3; i < max; i++)
	{
		results[i] = results[i - 3] + results[i - 2];
	}
	for (int i = 0; i < n; i++)
	{
		cout << results[dps[i]-1] << '\n';
	}
}
