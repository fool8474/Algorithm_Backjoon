#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
        printf("%d %d\n", start, to);
    else
    {
        hanoi(n - 1, start, bypass, to);
        printf("%d %d\n", start, to);
        hanoi(n - 1, bypass, to, start);
    }
}

void 하노이탑이동순서_11729()
{
    ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n";
    hanoi(num, 1, 3, 2);
}