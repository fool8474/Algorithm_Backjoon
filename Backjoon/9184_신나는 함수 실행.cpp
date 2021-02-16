#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int* dp = new int[21*21*21];

int getW(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}

	else if (a > 20 || b > 20 || c > 20)
	{
		return 1048576;
	}

	else if (dp[a * 400 + b * 20 + c] != -99)
	{
		return dp[a * 400 + b * 20 + c];
	}

	else if(a < b && b < c)
	{
		int result = getW(a, b, c - 1) + getW(a, b - 1, c - 1) - getW(a, b - 1, c);
		dp[a * 400 + b * 20 + c] = result;
		
		return result;
	}

	else
	{
		int result = getW(a - 1, b, c) + getW(a - 1, b - 1, c) + getW(a - 1, b, c - 1) - getW(a - 1, b - 1, c - 1);
		dp[a * 400 + b * 20 + c] = result;
		return result;
	}
}

void 신나는함수실행_9184()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int k = 21 * 21 * 21;
	for (int i = 0; i < k; i++)
	{
		dp[i] = -99;
	}
	
	int a, b, c;

	while (true)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;

		else
		{
			cout << "w(" << a << ", " << b << ", " << c << ") = " << getW(a, b, c) << "\n";
		}
	}
}

