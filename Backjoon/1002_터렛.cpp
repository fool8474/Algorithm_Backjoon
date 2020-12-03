#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void 터렛_1002()
{
	// 두 원 교차하는 가짓수
	int x1, y1, r1, x2, y2, r2, tc;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2) cout << -1 << endl;
			else cout << 0 << endl;
		}

		else
		{
			float distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
			if (r1 + r2 == distance || distance == abs(r1-r2))
			{
				cout << 1 << endl;
			}

			else if (abs(r1 - r2) < distance && distance < r1 + r2)
			{
				cout << 2 << endl;
			}

			else
			{
				cout << 0 << endl;
			}
		}
	}
}