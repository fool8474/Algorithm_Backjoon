#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first) return false;
	else if (a.first == b.first)
	{
		if (a.second > b.second) return false;
		else return true;
	}
	else return true;
}

void 좌표정렬하기_11650()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int n; cin >> n;
	pair<int, int>* pairs = new pair<int,int>[n];

	int x, y;
	
	for (int i = 0; i < n; i++)
	{
		cin >> pairs[i].first >> pairs[i].second;
	}

	sort(pairs, pairs + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << pairs[i].first << " " << pairs[i].second << "\n";
	}
}