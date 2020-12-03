#pragma once
#include <iostream>
#include <string>
using namespace std;

void FlyMeToTheAlphaCenTauri()
{
	long tCase, x, y;
	cin >> tCase;
	for (int i = 0; i < tCase; i++)
	{
		cin >> x >> y;
		long result = y - x;
		
		long curPos = 1, turn = 1, plusNum = 1;
		// 1턴에는 1위치에서 시작
		
		while (curPos < result)
		{ // 2턴부터..
			turn++; 
			curPos += plusNum;
			if (curPos >= result) break;
			turn++; 
			curPos += plusNum;
			if (curPos >= result) break;
			plusNum++; // 2턴마다 가는 거리 추가 
		}

		if (curPos > result) turn--;
		cout << turn << endl;
	}
}

// 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6...
// 1, 2, 4, 6, 9, 12, 16, 20, 25, 30, 36, 42...
// 1, 2, 3, 4, 5,  6,  7,  8,  9, 10, 11, 12...

//1 1
//2 1 1
//3 1 1 1
//4 1 2 1
//5 1 2 1 1
//6 1 2 2 1
//7 1 2 2 1 1
//8 1 2 2 2 1
//9 1 2 3 2 1
//10 1 2 3 2 1 1
//11 1 2 3 2 2 1
//12 1 2 3 3 2 1
//13 1 2 3 3 2 1 1
//14 1 2 3 3 2 2 1
//15 1 2 3 3 3 2 1
//16 1 2 3 4 3 2 1
//17 1 2 3 4 3 2 1 1