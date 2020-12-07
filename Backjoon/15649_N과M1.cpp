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

void printNM(int pos)
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
			if (!visited[i])
			{
				visited[i] = true;
				numList[pos] = i+1;
				printNM(pos + 1);
				visited[i] = false;
			}
		}
	}
}

void N��M_15649()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) numList.push_back(0);
	for (int i = 0; i < n; i++) visited.push_back(false);
	printNM(0);
}
*/