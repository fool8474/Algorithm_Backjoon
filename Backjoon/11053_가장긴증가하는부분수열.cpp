#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 가장긴증가하는부분수열_11053()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* a = new int[n];
	int* count = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		count[i] = 1;
	}

	for (int i = 1; i < n; i++)
	{
		int max = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
			{
				if (max < count[j] + 1)
				{
					max = count[j] + 1;
				}
			}
		}
		count[i] = max;
	}

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < count[i]) max = count[i];
	}
	cout << max << " ";
}
