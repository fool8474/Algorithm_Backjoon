#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 소인수분해_11653()
{
    ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
    long n; cin >> n;

    while (true)
    {
        if (n == 1) break;
        for(int i=2; i<=n; i++)
            if (n % i == 0)
            {
                cout << i << endl;
                n /= i;
                break;
            }
    }
}
