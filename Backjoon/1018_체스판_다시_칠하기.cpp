#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void 체스판다시칠하기_1018()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int w, h; cin >> w >> h;
	string* board = new string[w];

	for (int i = 0; i < w; i++)
	{
		cin >> board[i];
	}

	int min = 99999;
	for (int i = 0; i <= w - 8; i++)
	{
		for (int j = 0; j <= h - 8; j++)
		{
			int wBoard = 0, bBoard = 0;
			
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (k % 2 == l % 2)
					{
						if(board[i + k][j + l] == 'W') wBoard++;
						else bBoard++;
					}

					else
					{
						if (board[i + k][j + l] == 'B') wBoard++;
						else bBoard++;
					}
				}
			}

			if (wBoard < min) min = wBoard;
			if (bBoard < min) min = bBoard;
		}
	}
	cout << min << endl;
}