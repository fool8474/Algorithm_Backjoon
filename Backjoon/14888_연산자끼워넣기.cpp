#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

/*
int numCount;
long* longs;
long curCount;
int operators[4];
long minNumber;
long maxNumber;

void ResultMaker(int num)
{
	if (num == numCount) {
		if (curCount < minNumber) minNumber = curCount;
		if (curCount > maxNumber) maxNumber = curCount;
		return;
	}

	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (operators[i] > 0)
			{
				operators[i]--;
				switch (i)
				{
				case 0: // +
					curCount += longs[num];
					ResultMaker(num+1);
					curCount -= longs[num];
					break;

				case 1: // -
					curCount -= longs[num];
					ResultMaker(num + 1);
					curCount += longs[num];
					break;

				case 2: // *
					curCount *= longs[num];
					ResultMaker(num + 1);
					curCount /= longs[num];
					break;

				case 3: // /
					long prev = curCount;
					curCount /= longs[num];
					ResultMaker(num + 1);
					curCount = prev;
					break;
				}
				operators[i]++;
			}
		}
	}
}

void 연산자끼워넣기_14888()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	minNumber = 99999999999999;
	maxNumber = -99999999999999;

	numCount; cin >> numCount;
	longs = new long[numCount];
	for (int i = 0; i < numCount; i++) cin >> longs[i];
	for (int i = 0; i < 4; i++) cin >> operators[i];
	curCount = longs[0];

	ResultMaker(1);

	cout << maxNumber << '\n' << minNumber << '\n';
}
*/
