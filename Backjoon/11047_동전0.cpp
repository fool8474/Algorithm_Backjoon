#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void µ¿Àü0_11047()
{
	int n, k;
	cin >> n >> k;
	int* nums = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	int count = 0;
	for (int i = n-1; i >= 0; i--)
	{
		while (k >= nums[i])
		{
			k -= nums[i];
			count++;
		}
	}
	cout << count << endl;
}