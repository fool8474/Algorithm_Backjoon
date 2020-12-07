#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int sdoku[9][9];
bool found;
vector<pair<int, int>> poses;

void printSudoku()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << sdoku[i][j] << ' ';
		}
		cout << '\n';
	}
}
bool check(pair<int, int> p)
{

	int square_x = p.first / 3; // 구역을 나눔
	int square_y = p.second / 3;
	for (int i = 0; i < 9; i++)
	{
		if (sdoku[p.first][i] == sdoku[p.first][p.second] && i != p.second)
			return false; // 같은 행에 같은 숫자가 있으면 false 반환
		if (sdoku[i][p.second] == sdoku[p.first][p.second] && i != p.first)
			return false; // 같은 열에 같은 숫자가 있으면 false 반환
	}
	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
		{
			if (sdoku[i][j] == sdoku[p.first][p.second])
			{
				if (i != p.first && j != p.second)
					return false; // 같은 구역에 같은 숫자가 있으면 false 반환
			}
		}
	return true; // 모든 조건 만족시 유효성 검사 통과
}

void DoSudoku(int n)
{
	if (n == poses.size())
	{
		printSudoku();
		found = true;
		return;
	}

	for (int j = 1; j <= 9; j++)
	{
		sdoku[poses[n].first][poses[n].second] = j;
		if (check(poses[n])) DoSudoku(n + 1);
		if (found) return;
	}

	sdoku[poses[n].first][poses[n].second] = 0;
	
	return;
}

void 스도쿠_2580()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sdoku[i][j];
			if (sdoku[i][j] == 0) poses.push_back(pair<int, int>(i, j));
		}
	}

	DoSudoku(0);
}
