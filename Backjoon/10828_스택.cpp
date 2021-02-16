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

void ½ºÅÃ_10828() {
	int count; cin >> count;

	stack<int> stk;

	for (int i = 0; i < count; i++)
	{
		string name; cin >> name;
		int n;
		if(name == "push")
		{
			cin >> n;
			stk.push(n);
		}
		else if (name == "top")
		{
			if (stk.size() != 0) cout << stk.top() << "\n";
			else cout << "-1" << endl;
		}
		else if (name == "pop")
		{
			if (stk.size() != 0)
			{
				cout << stk.top() << "\n";
				stk.pop();
			}
			else cout << "-1" << endl;
		}

		else if (name == "size")
		{
			cout << stk.size() << "\n";
		}
		if (name == "empty")
		{
			if (stk.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
	}
}