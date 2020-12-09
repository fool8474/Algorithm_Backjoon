#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void Á¤¼ö»ï°¢Çü_1932()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	vector<vector<int>> triangle = vector<vector<int>>();
	vector<vector<int>> score = vector<vector<int>>();
	int input, num; cin >> num;

	for (int i = 0; i < num; i++)
	{
		vector<int> vec, vec2;
		for (int j = 0; j <= i; j++)
		{
			cin >> input; 
			vec.push_back(input);
			vec2.push_back(0);
		}
		triangle.push_back(vec);
		score.push_back(vec2);
	}

	score[0][0] = triangle[0][0];
	for (int i = 1; i < num; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == 0) score[i][j] = score[i - 1][j] + triangle[i][j];
			else if (j == i) score[i][j] = score[i-1][j-1] + triangle[i][j];
			else score[i][j] = max(score[i - 1][j - 1], score[i - 1][j]) + triangle[i][j];
		}
	
	int maxNum = -999;
	for (int i = 0; i < num; i++) if (maxNum < score[num - 1][i]) maxNum = score[num - 1][i];
	cout << maxNum;
}

