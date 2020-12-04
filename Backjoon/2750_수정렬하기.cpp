#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void 수정렬하기_2750()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int n; cin >> n;
	int* ints = new int[n];
	for (int i = 0; i < n; i++)  cin >> ints[i];
	sort(ints, ints+n);
	for (int i = 0; i < n; i++) cout << ints[i] << endl;
}