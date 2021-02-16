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

void Á¦·Î_10773() {
	int count; cin >> count;

	stack<int> stk;

	for (int i = 0; i < count; i++)
	{
		int n; cin >> n;
		if (n == 0) stk.pop();
		else stk.push(n);
	}

	int result = 0;
	while (true)
	{
		if (stk.empty()) break;
		result += stk.top();
		stk.pop();
	}

	cout << result;
}