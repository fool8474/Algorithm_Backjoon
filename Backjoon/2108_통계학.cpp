#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

void Åë°èÇÐ_2108()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int arr[8001];
	int n, num, max = -1, mode;
	vector<int> vt, mode_vt;

	for (int i = 0; i < 8001; i++)
	{
		arr[i] = 0;
	}

	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vt.push_back(num);
		sum += num;
		num = (num <= 0) ? abs(num) : num + 4000;
		arr[num]++;
		if (arr[num] > max) {
			max = arr[num];
			mode = num;
		}
	}

	sort(vt.begin(), vt.end(), compare);
	for (int i = 0; i < 8001; i++)
	{
		if (arr[i] == max) {
			mode = i;
			mode = (mode <= 4000) ? -mode : mode - 4000;
			mode_vt.push_back(mode);
		}
	}

	sort(mode_vt.begin(), mode_vt.end(), compare);
	mode = (mode_vt.size() >= 2) ? mode_vt[1] : mode_vt[0];
	double eve = sum / double(n);
	printf("%.0f\n", eve);
	printf("%d\n", vt[n / 2]);
	printf("%d\n", mode);
	printf("%d\n", vt[vt.size() - 1] - vt[0]);
}