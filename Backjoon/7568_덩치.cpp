#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

struct body
{
	int kg;
	int height;
	int count;
};

int CheckBodyCompare(body a, body b)
{
	if (a.height > b.height && a.kg > b.kg)
		return 1;
	else if (a.height < b.height && a.kg < b.kg)
		return 2;
	else
		return 0;
}

void µ¢Ä¡_7568()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int count; cin >> count;
	body* bodies = new body[count];

	for (int i = 0; i < count; i++)
	{
		cin >> bodies[i].kg >> bodies[i].height;
		bodies[i].count = 1;
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			int result = CheckBodyCompare(bodies[i], bodies[j]);
			if (result == 1) bodies[j].count++;
			else if (result == 2) bodies[i].count++;
		}
		cout << bodies[i].count << " ";
	}
}