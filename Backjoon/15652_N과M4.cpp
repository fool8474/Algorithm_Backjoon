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

void printNM4(int pos)
{
	if (pos == m)
	{
		for (int i = 0; i < m; i++) cout << numList[i] << ' ';
		cout << '\n';
		return;
	}

	else
	{
		for (int i = 0; i < n; i++)
		{
			if (pos == 0 || (pos > 0 && numList[pos-1] <= i+1))
			{
				numList[pos] = i + 1;
				printNM4(pos + 1);
			}
		}
	}
}

void N°úM4_15652()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) numList.push_back(0);
	printNM4(0);
}

*/