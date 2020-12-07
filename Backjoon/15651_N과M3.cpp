/*
#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int n, m;
vector<int> numList;
vector<bool> visited;
string result = "";

void printNM3(int pos)
{
	if (pos == m)
	{
		
		for (int i = 0; i < m; i++) {
			result += (char)numList[i] + 48;
			result += ' ';
		}
		result += '\n';
		return;
	}

	else
	{
		for (int i = 0; i < n; i++)
		{
			numList[pos] = i + 1;
			printNM3(pos + 1);
		}
	}
}

void N°úM3_15650()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) numList.push_back(0);
	for (int i = 0; i < n; i++) visited.push_back(false);
	printNM3(0);

	cout << result;
}
*/