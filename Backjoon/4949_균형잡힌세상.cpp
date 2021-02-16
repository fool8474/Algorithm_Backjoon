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

void ±ÕÇüÀâÈù¼¼»ó_4949() {

	stack<char> stk;
	while(true)
	{
		bool isTrue = false;
		string k; getline(cin, k);
		if (k == ".") break;
		for (int j = 0; j < k.length(); j++)
		{
			if (k[j] == '(' || k[j] == ')' || k[j] == '[' || k[j] == ']')
			{
				if (k[j] == '(') stk.push('(');
				else if (k[j] == '[') stk.push('[');
				else if (k[j] == ')')
				{
					if (stk.empty() || stk.top() == '[')
					{
						cout << "no" << "\n";
						isTrue = true;
						break;
					}

					else stk.pop();
				}

				else if(k[j] == ']')
				{
					if (stk.empty() || stk.top() == '(')
					{
						cout << "no" << "\n";
						isTrue = true;
						break;
					}

					else stk.pop();
				}
			}
		}

		if (!isTrue)
		{
			if (stk.empty()) cout << "yes" << "\n";
			else cout << "no" << "\n";
		}

		stk = stack<char>();
	}
}