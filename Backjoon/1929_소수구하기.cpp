#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void 소수구하기_1929()
{
    int a, b; cin >> a >> b;

    bool* arr = new bool[b + 1];
    for (int i = 0; i < b + 1; i++) arr[i] = true;
    int j;

    for (int i = 2; i < b + 1; i++) {
        if (arr[i]) { // 소수 케이스
            if ((unsigned int)pow(i, 2) > 1000001) {
                break; // 제곱 제한 넘으면 패스
            }
            else {
                for (j = (int)pow(i, 2); j < b + 1;) {
                    arr[j] = false;
                    j = j + i;
                }
            }
        }
    }

    if (a == 1) a++;

    for (int i = a; i < b + 1; i++) {
        if (arr[i] && i >= a)    cout << i << "\n";
    }

    delete[] arr; // 동적할당 해제
}