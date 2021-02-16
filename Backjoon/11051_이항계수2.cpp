#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;


void 이항계수2_11051() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> c = vector<vector<int>>();

	for (int i = 0; i <= n; i++)
	{
		c.push_back(vector<int>());
		for (int j = 0; j <= k; j++)
		{
			c[i].push_back(1);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (i == j || j == 0) c[i][j] = 1;
			else {
				c[i][j] = (c[i - 1][j - 1] % 10007) + (c[i - 1][j] % 10007);
				c[i][j] %= 10007;
			}
		}
	}

	cout << c[n][k];
}