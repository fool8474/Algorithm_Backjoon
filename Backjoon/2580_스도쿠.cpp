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

	int square_x = p.first / 3; // ������ ����
	int square_y = p.second / 3;
	for (int i = 0; i < 9; i++)
	{
		if (sdoku[p.first][i] == sdoku[p.first][p.second] && i != p.second)
			return false; // ���� �࿡ ���� ���ڰ� ������ false ��ȯ
		if (sdoku[i][p.second] == sdoku[p.first][p.second] && i != p.first)
			return false; // ���� ���� ���� ���ڰ� ������ false ��ȯ
	}
	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
		{
			if (sdoku[i][j] == sdoku[p.first][p.second])
			{
				if (i != p.first && j != p.second)
					return false; // ���� ������ ���� ���ڰ� ������ false ��ȯ
			}
		}
	return true; // ��� ���� ������ ��ȿ�� �˻� ���
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

void ������_2580()
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
