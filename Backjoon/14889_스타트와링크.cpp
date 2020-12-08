#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int personCount;
vector<vector<int>> scores;
int teamA, teamB;
int teamANum, teamBNum;
bool* isTeamA;
int minTeamScore;
int divideCount;

void Scoreing(int cnt)
{
	if (cnt == personCount)
	{
		int tempDistance = abs(teamA - teamB);
		if (minTeamScore > tempDistance)
		{
			minTeamScore = tempDistance;
		}
		return;
	}

	if (teamANum < divideCount)
	{
		isTeamA[cnt] = true;
		teamANum++;
		int plusNum = 0;

		for (int i = 0; i < cnt; i++)
		{
			if (isTeamA[i])
			{
				plusNum += (scores[i][cnt] + scores[cnt][i]);
			}
		}

		teamA += plusNum;
		Scoreing(cnt + 1);

		isTeamA[cnt] = false;
		teamA -= plusNum;
		teamANum--;
	}

	if (teamBNum < divideCount)
	{
		isTeamA[cnt] = false;
		teamBNum++;
		int plusNum = 0;

		for (int i = 0; i < cnt; i++)
		{
			if (!isTeamA[i])
			{
				plusNum += (scores[i][cnt] + scores[cnt][i]);
			}
		}
		teamB += plusNum;
		Scoreing(cnt + 1);

		isTeamA[cnt] = true;
		teamB -= plusNum;
		teamBNum--;
	}
	
	return;
}

void 스타트와링크_14889()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	cin >> personCount;
	scores = vector<vector<int>>();
	teamA = 0; teamB = 0;
	isTeamA = new bool[personCount];
	minTeamScore = 99999999;
	divideCount = personCount / 2;

	int score;

	for (int i = 0; i < personCount; i++)
	{
		vector<int> vScore = vector<int>();

		for (int j = 0; j < personCount; j++)
		{
			cin >> score;
			vScore.push_back(score);
		}

		scores.push_back(vScore);
	}

	Scoreing(0);

	cout << minTeamScore << endl;
}
