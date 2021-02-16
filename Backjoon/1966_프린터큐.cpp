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
#include <deque>

using namespace std;

void ������ť_1966() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int tc; cin >> tc;
	int n, m, curPos, curNum, num;
	for (int i = 0; i < tc; i++)
	{
		int count = 0;

		queue<pair<int, int>> que;	// ��ġ�� ���� �ִ� ť
		priority_queue<int> pq;		// �켱���� ť

		cin >> n >> m;

		for (int j = 0; j < n; j++)
		{
			cin >> num;
			que.push({ num, j });	// �� / ��ġ
			pq.push(num);	// ���� �־����
		}

		while (que.size())
		{
			curNum = que.front().first;
			curPos = que.front().second;
			que.pop(); // que�� ù��° ���� (������ ��������̹Ƿ�)

			if (pq.top() == curNum) // ���� �켱�Ǵ°� ������ ���ڿ� ���ٸ�
			{
				count++;
				pq.pop(); // �켱���� ť���� ����
				if (curPos == m) break; // ���� ��ġ���?
			}
			else que.push({ curNum, curPos }); // �ڷ� ���ư��� ��
		}
		cout << count << "\n";
	}
}