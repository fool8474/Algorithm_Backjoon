#pragma once
#include <iostream>
#include <string>
using namespace std;

void ¼Ò¼ö_2581()
{
	int tc, tc2, minNum = -1, number = 0; cin >> tc >> tc2;
	bool min = false;
	for (int i = tc; i <= tc2; i++)
	{
		if (i == 0 || i == 1) continue;
		bool isPrime = true;
		for (int k = 2; k < i; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			number += i;
			if (min == false)
			{
				min = true;
				minNum = i;
			}
		}
	}
	if (minNum != -1) cout << number << "\n" << minNum << endl;
	else cout << minNum << endl;
}