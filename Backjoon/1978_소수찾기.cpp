#pragma once
#include <iostream>
#include <string>
using namespace std;

void 소수찾기_1978()
{
	int tc, count = 0; cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		int j; cin >> j;
		if (j == 0 || j == 1) continue;
		bool isPrime = true;
		for (int k = 2; k < j; k++)
		{
			if (j % k == 0) 
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime) count++;
	}

	cout << count << endl;
}