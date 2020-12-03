#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void Á÷°¢»ï°¢Çü_4153()
{
	long x, y, z;
	int temp;
	while (true)
	{
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) break;
		if (x > z) { temp = z;  z = x; x = temp; }
		if (y > z) { temp = z;  z = y; y = temp; }
		if (x * x + y * y == z * z) cout << "right" << endl;
		else cout << "wrong" << endl;
	}
}