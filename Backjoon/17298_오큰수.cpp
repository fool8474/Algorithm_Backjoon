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

void ��ū��_17298() {

	int n; cin >> n;
	vector<int> data;	// �ԷµǴ� ����
	stack<int> s;		// ���� üũ���� ���� �ֵ�

	for (int i = 0; i < n; i++)
	{
		int k; cin >> k;
		data.push_back(k);
	}

	vector<int> ans(data.size(), -1); // �� �ʱ�ȭ

	for (int i = 0; i < data.size(); i++) // �Ʒ����� ���� �ö󰣴�.
	{
		while (!s.empty() && data[s.top()] < data[i])  // �� ��ġ�� �����Ͱ� �ֱ��� �����ͺ��� �۴ٸ� (���� ������)
		{
			ans[s.top()] = data[i]; 
			s.pop(); 
		}
		s.push(i); // ���� ��ġ�� �־�д�.
	}

	for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
	cout << "\n";
}