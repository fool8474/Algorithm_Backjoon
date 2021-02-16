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

void 프린터큐_1966() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int tc; cin >> tc;
	int n, m, curPos, curNum, num;
	for (int i = 0; i < tc; i++)
	{
		int count = 0;

		queue<pair<int, int>> que;	// 위치와 값이 있는 큐
		priority_queue<int> pq;		// 우선순위 큐

		cin >> n >> m;

		for (int j = 0; j < n; j++)
		{
			cin >> num;
			que.push({ num, j });	// 값 / 위치
			pq.push(num);	// 값을 넣어놓음
		}

		while (que.size())
		{
			curNum = que.front().first;
			curPos = que.front().second;
			que.pop(); // que의 첫번째 없앰 (어차피 사라질것이므로)

			if (pq.top() == curNum) // 제일 우선되는게 현재의 숫자와 같다면
			{
				count++;
				pq.pop(); // 우선순위 큐에서 삭제
				if (curPos == m) break; // 현재 위치라면?
			}
			else que.push({ curNum, curPos }); // 뒤로 돌아가게 함
		}
		cout << count << "\n";
	}
}