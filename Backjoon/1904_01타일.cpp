#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void Å¸ÀÏ01_1904()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* d = new int[n];
	d[0] = 0; d[1] = 1; d[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 2] + d[i - 1];
		d[i] %= 15746;
	}

	cout << d[n] << '\n';
}
