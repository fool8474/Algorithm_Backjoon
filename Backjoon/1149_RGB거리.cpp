#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void RGB°Å¸®_1149()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int* datas[3]; int* minDis[3];
	datas[0] = new int[n]; datas[1] = new int[n]; datas[2] = new int[n];
	minDis[0] = new int[n]; minDis[1] = new int[n]; minDis[2] = new int[n];

	for (int i = 0; i < n; i++) cin >> datas[0][i] >> datas[1][i] >> datas[2][i];
	minDis[0][0] = datas[0][0]; minDis[1][0] = datas[1][0]; minDis[2][0] = datas[2][0];

	for (int i = 1; i < n; i++)
	{
		minDis[0][i] = min(minDis[1][i - 1], minDis[2][i - 1]) + datas[0][i];
		minDis[1][i] = min(minDis[0][i - 1], minDis[2][i - 1]) + datas[1][i];
		minDis[2][i] = min(minDis[0][i - 1], minDis[1][i - 1]) + datas[2][i];
	}

	
	cout << min(minDis[0][n-1], min(minDis[1][n-1], minDis[2][n-1])) << '\n';
}

