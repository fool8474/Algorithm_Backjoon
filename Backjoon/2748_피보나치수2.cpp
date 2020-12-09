#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 피보나치수2_2748()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	long long cur, prev = 1, prev2 = 0;
	if (n == 0) cout << 0 << '\n';
	else if (n == 1) cout << 1 << '\n';
	else
	{
		for (int i = 1; i < n; i++)
		{
			cur = prev + prev2;
			if (i == n - 1) cout << cur << '\n';
			prev2 = prev;
			prev = cur;
		}
	}
}
