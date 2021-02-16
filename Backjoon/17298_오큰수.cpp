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

void 오큰수_17298() {

	int n; cin >> n;
	vector<int> data;	// 입력되는 수열
	stack<int> s;		// 아직 체크되지 않은 애들

	for (int i = 0; i < n; i++)
	{
		int k; cin >> k;
		data.push_back(k);
	}

	vector<int> ans(data.size(), -1); // 답 초기화

	for (int i = 0; i < data.size(); i++) // 아래부터 위로 올라간다.
	{
		while (!s.empty() && data[s.top()] < data[i])  // 이 위치의 데이터가 최근의 데이터보다 작다면 (조건 만족시)
		{
			ans[s.top()] = data[i]; 
			s.pop(); 
		}
		s.push(i); // 현재 위치를 넣어둔다.
	}

	for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
	cout << "\n";
}