#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct personData {
	int number;
	int age;
	string name;
};

bool compare(personData a, personData b)
{
	if (a.age == b.age) return a.number < b.number;
	else return a.age < b.age;
}

void 나이순정렬_10814()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	vector<personData> vData;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		personData p;
		cin >> p.age >> p.name;
		p.number = i;
		vData.push_back(p);
	}

	sort(vData.begin(), vData.end(), compare);

	for (int i = 0; i < vData.size(); i++)
	{
		cout << vData[i].age << " " << vData[i].name << '\n';
	}
}