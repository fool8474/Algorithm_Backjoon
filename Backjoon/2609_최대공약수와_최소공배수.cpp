#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void �ִ�������_�ּҰ����_2609()
{
    ios::sync_with_stdio(0); cin.tie(0);
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
    cout << GCD << '\n' << LCM << '\n';
}