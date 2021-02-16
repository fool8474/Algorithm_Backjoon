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

void 요세푸스문제0_11866() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n, k;
	queue<int>q;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) q.push(i);
	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front()); // i번째를 맨 뒤로 보낸다.
			q.pop();
		}

		cout << q.front(); // 빙 돌아가므로 n번째의 위치가 계속 나온다.
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";
}