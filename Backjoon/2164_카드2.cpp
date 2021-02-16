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

void Ä«µå2_2164() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int count; cin >> count;
	queue<int> que;
	for (int i = 1; i <= count; i++) que.push(i);

	while (true)
	{
		if (que.size() == 1) break;
		que.pop();
		if (que.size() == 1) break;
		que.push(que.front());
		que.pop();
	}
	cout << que.front();
}