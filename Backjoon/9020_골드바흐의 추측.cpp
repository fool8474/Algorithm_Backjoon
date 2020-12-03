#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void 골드바흐의추측_9020()
{
    bool* arr = new bool[10001];
    for (int i = 0; i < 10001; i++) arr[i] = true;
    int j;

    for (int i = 2; i < 10001; i++) {
        if (arr[i]) { // 소수 케이스
            if ((unsigned int)pow(i, 2) > 10001) {
                break; // 제곱 제한 넘으면 패스
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

    delete[] arr; // 동적할당 해제
}