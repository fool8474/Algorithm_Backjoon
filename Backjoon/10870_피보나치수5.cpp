#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int pibonacci(int n)
{
	if (n == 0) return 0;
	else if (n == 1 || n == 2) return 1;

	return pibonacci(n - 1) + pibonacci(n - 2);
}

void 피보나치수5_10870()
{
	int n; cin >> n;
	cout << pibonacci(n) << endl;
}