#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int fac(int n)
{
	if (n <= 1) return 1;
	return n * fac(n-1);
}

void ���丮��_10872()
{
	int n; cin >> n;
	cout << fac(n) << endl;
}
