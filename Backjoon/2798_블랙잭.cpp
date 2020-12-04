#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void ºí·¢Àè_2798()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n, m, result = -999999; cin >> n >> m;
	int* nums = new int[n];
	
	for (int i = 0; i < n; i++) cin >> nums[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int tempRes = nums[i] + nums[j] + nums[k];
				if (tempRes > m) continue;
				else if (tempRes > result) result = tempRes;
			}
		}
	}

	cout << result;
}