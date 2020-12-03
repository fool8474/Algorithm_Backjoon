#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void 직사각형에서탈출_1085()
{
	int x, y, w, h, min, min2;
	cin >> x >> y >> w >> h;
	if (x > w - x) min = w - x;
	else min = x;

	if (y > h - y) min2 = h - y;
	else min2 = y;

	if (min < min2) cout << min << endl;
	else cout << min2 << endl;
}