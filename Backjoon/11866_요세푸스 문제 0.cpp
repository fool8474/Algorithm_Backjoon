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

void �似Ǫ������0_11866() {
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
			q.push(q.front()); // i��°�� �� �ڷ� ������.
			q.pop();
		}

		cout << q.front(); // �� ���ư��Ƿ� n��°�� ��ġ�� ��� ���´�.
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";
}