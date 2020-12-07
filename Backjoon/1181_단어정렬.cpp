#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
	{
		return a.size() < b.size();
	}
}


void 단어정렬_1181()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	vector<string> stringData;
	int n; cin >> n; 
	
	string k;
	for (int i = 0; i < n; i++) {
		cin >> k; 
		stringData.push_back(k);
	}

	sort(stringData.begin(), stringData.end(), compare);
	cout << stringData[0] << '\n';
	for (int i = 1; i < stringData.size(); i++)
	{
		k = stringData[i];
		if( k != stringData[i-1]) cout << stringData[i] << '\n';
	}
}