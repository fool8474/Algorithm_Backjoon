#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int numOfSet = 0;
int n;
pair<int, int>* posPair;

void QueenPos(int row)
{
	if (row == n) {
		numOfSet++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		posPair[row].first = row;
		posPair[row].second = i;

		bool isFailed = false;
		for (int j = 0; j < row; j++)
		{
			if (posPair[row].second == posPair[j].second ||
				abs(posPair[row].first - posPair[j].first) == abs(posPair[row].second - posPair[j].second))
			{
				isFailed = true;
				break;
			}
		}

		if(isFailed)
		{
			continue;
		}

		else
		{
			QueenPos(row + 1);
		}
	}
}

void N_Queen_9663()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cin >> n;
	posPair = new pair<int, int>[n];
	QueenPos(0);
	cout << numOfSet << endl;
}
