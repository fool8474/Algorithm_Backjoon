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

void 스택수열_1874() {

	stack<int> cnt;
	stack<int> target;
	vector<int> targetV;
	vector<char> result;
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int k; cin >> k;
		targetV.push_back(k);
	}

	for (int i = n-1; i >= 0; i--)
	{
		target.push(targetV[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		cnt.push(i);
		result.push_back('+');

		while (true)
		{
			if (target.empty() || cnt.empty()) break;
			else if (target.top() == cnt.top())
			{
				result.push_back('-');
				target.pop();
				cnt.pop();
			}
			else
			{
				break;
			}
		}
	}

	if (target.empty())
	{
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i] << "\n";
		}
	}

	else
	{
		cout << "NO" << "\n";
	}
}