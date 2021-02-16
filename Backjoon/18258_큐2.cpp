#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;

void ť2_18258() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int count; cin >> count;

	queue<int> que;

	for (int i = 0; i < count; i++)
	{
		string name; cin >> name;
		int n;
		if (name == "push")
		{
			cin >> n;
			que.push(n);
		}
		else if (name == "front")
		{
			if (que.size() != 0) cout << que.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (name == "back")
		{
			if (que.size() != 0) cout << que.back() << "\n";
			else cout << "-1" << "\n";
		}
		else if (name == "pop")
		{
			if (que.size() != 0)
			{
				cout << que.front() << "\n";
				que.pop();
			}
			else cout << "-1" << "\n";
		}

		else if (name == "size")
		{
			cout << que.size() << "\n";
		}
		if (name == "empty")
		{
			if (que.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
	}
}