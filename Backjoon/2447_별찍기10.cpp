#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void star(int i, int j, int num)
{
	if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
		// i,j의 계산. num은 제곱수가 들어오므로 그것에 맞게 간다.
	{
		cout << ' ';
	}

	else
	{
		if (num / 3 == 0)
		{
			cout << '*';
		}
		else
		{
			star(i, j, num / 3);
		}
	}
}

void 별찍기10_2447()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			star(i, j, num);
		}
		cout << '\n';
	}
}