#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 가장긴바이토닉부분수열_11054()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* a = new int[n];
	int* count = new int[n];
	int* count2 = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		count[i] = 1;
		count2[i] = 1;
	}

	for (int i = 1; i < n; i++)
	{
		int max = -1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] > a[j] && max < count[j] + 1)
			{
				count[i] = count[j] + 1;
				max = count[i];
			}
		}
	}
	
	for (int i = n - 2; i >= 0; i--)
	{
		int max = -1;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j] && max < count2[j] + 1)
			{
				count2[i] = count2[j] + 1;
				max = count2[i];
			}
		}
	}

	int max = -1;
	for (int i = 0; i < n; i++)
	{
		if (count[i] + count2[i] > max) max = count[i] + count2[i];
	}

	cout << max - 1;
}
