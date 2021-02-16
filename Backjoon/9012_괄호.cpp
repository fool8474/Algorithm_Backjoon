#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>
#include <stack>

using namespace std;

void °ýÈ£_9012() {
	int count; cin >> count;

	stack<int> stk;

	for (int i = 0; i < count; i++)
	{
		bool isTrue = false;
		string k; cin >> k;
		for (int j = 0; j < k.length(); j++)
		{
			if (k[j] == '(')
			{
				stk.push(0);
			}

			else
			{
				if (stk.empty())
				{
					cout << "NO" << "\n";
					isTrue = true;
					break;
				}

				else
				{
					stk.pop();
				}
			}
		}

		if (!isTrue)
		{
			if (stk.empty()) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}

		stk = stack<int>();
	}
}