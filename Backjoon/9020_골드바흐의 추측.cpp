#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void ������������_9020()
{
    bool* arr = new bool[10001];
    for (int i = 0; i < 10001; i++) arr[i] = true;
    int j;

    for (int i = 2; i < 10001; i++) {
        if (arr[i]) { // �Ҽ� ���̽�
            if ((unsigned int)pow(i, 2) > 10001) {
                break; // ���� ���� ������ �н�
            }
            else {
                for (j = (int)pow(i, 2); j < 10001;) {
                    arr[j] = false;
                    j = j + i;
                }
            }
        }
    }

    int tc; cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int num; cin >> num;
        int count = num / 2;
        while (count >= 0)
        {
            if (arr[count] && arr[num - count])
            {
                cout << count << " " << num - count << endl;
                break;
            }

            count--;
        }
    }

    delete[] arr; // �����Ҵ� ����
}