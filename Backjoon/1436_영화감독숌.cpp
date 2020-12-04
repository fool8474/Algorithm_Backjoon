#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void ¿µÈ­°¨µ¶¼ò_1436()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n; cin >> n;
	int i = 666;
	int count = 1;
	while (true)
	{
		if (count == n) break;
		i++;

		string k = to_string(i);
		int countSix = 0;
		for (int j = 0; j < k.length(); j++)
		{
			if (k[j] == '6') countSix++;
			else countSix = 0;

			if (countSix == 3)
			{
				count++;
				break;
			}
		}
	}

	cout << i << endl;
}