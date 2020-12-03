#pragma once
#include <iostream>
#include <string>
using namespace std;

void ACMHotel_10250()
{
	int numOfQ, w, h, cus;
	string result = "";
	cin >> numOfQ;
	for (int i = 0; i < numOfQ; i++)
	{
		cin >> h >> w >> cus;
		int res1 = cus % h;
		if (res1 == 0) res1 = h;
		int res2 = cus / h + 1;
		if (cus % h == 0) res2 -= 1;
		cout << res1 * 100 + res2 << endl;
	}
}