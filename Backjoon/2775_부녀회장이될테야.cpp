#pragma once
#include <iostream>
#include <string>
using namespace std;

void �γ�ȸ���̵��׾�_2775()
{
	int tCase, w, h;
	cin >> tCase;
	for (int i = 0; i < tCase; i++)
	{
		int number = 1;
		cin >> h >> w;
		for (int j = 0; j < h + 1; j++)
		{
			number *= j + w;
			number /= j + 1;
		}

		cout << (int)number << endl;
	}
}
//3*4*5 / 6 : 3�� 3 = 10
//4*5*6 / 6 : 3�� 4 = 20
//
//2*3*4*5 / 6 * 4 : 4�� 2 = 5
//3*4*5*6 / 6 * 4 : 4�� 3 = 15

