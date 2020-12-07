#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(char a, char b)
{
	return a > b;
}

void 소트인사이드_1427()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	string numData;
	cin >> numData;
	vector<char> vNums;

	while (numData.length() > 0)
	{
		vNums.push_back(numData[0]);
		numData = numData.substr(1, numData.length());
	}

	sort(vNums.begin(), vNums.end(), compare);
	for (int i = 0; i < vNums.size(); i++) cout << vNums[i];
}