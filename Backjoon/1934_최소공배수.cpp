#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void 최소공배수_1934()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, e; cin >> a >> b;
        int LCM, GCD;
        d = a; e = b;
        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        GCD = a;
        LCM = (d / GCD) * (e / GCD) * GCD;
        cout << LCM << '\n';
    }
}