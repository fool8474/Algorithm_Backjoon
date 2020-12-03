#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void ����Ʈ������_4948()
{
    bool* arr = new bool[246913];
    for (int i = 0; i < 246913; i++) arr[i] = true;
    int j;

    for (int i = 2; i < 246913; i++) {
        if (arr[i]) { // �Ҽ� ���̽�
            if ((unsigned int)pow(i, 2) > 246913) {
                break; // ���� ���� ������ �н�
            }
            else {
                for (j = (int)pow(i, 2); j < 246913;) {
                    arr[j] = false;
                    j = j + i;
                }
            }
        }
    }

    while (true)
    {
        int count = 0;
        int testCase; cin >> testCase;
        if (testCase == 0) break;

        for (int i = testCase + 1; i <= testCase * 2; i++) {
            if (arr[i]) count++;
        }

        cout << count << endl;
    }

    delete[] arr; // �����Ҵ� ����
}