#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void ºÐÇØÇÕ_2231()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n; cin >> n;
	
	bool isFind = false;
	for (int i = 1; i < n; i++)
	{
		int k = i;
		int result = k;
		while (k > 0)
		{
			result += k % 10;
			k /= 10;
		}
		if (result == n)
		{
			cout << i << endl;
			isFind = true;
			break;
		}
	}
	if (isFind == false) cout << 0 << endl;
}