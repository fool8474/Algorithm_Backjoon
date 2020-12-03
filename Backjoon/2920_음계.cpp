#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void À½°è_2920()
{
	int num[8];

	for (int i = 0; i < 8; i++) cin >> num[i];

	bool as = true;
	bool de = true;
	for (int i = 0; i < 8; i++)
	{
		if (num[i] != i + 1) as = false;
		if (num[i] != 8 - i) de = false;
	}
	if (as) cout << "ascending";
	else if (de) cout << "descending";
	else cout << "mixed";
}