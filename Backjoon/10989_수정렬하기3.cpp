#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void 수정렬하기3_10989()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n; cin >> n;
	int* ints = new int[10001];
	for (int i = 0; i < 10001; i++)ints[i] = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> k; ints[k]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < ints[i]; j++)
		{
			printf("%d\n", i);
		}
	}
}