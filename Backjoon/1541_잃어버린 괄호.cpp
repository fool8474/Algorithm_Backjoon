#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void 잃어버린괄호_1541()
{
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    bool isminus = false;
    int result = 0;
    string slice = "";

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || i == s.size())
        {
            if (isminus) result -= stoi(slice);
            else result += stoi(slice);
            if (s[i] == '-') isminus = true;
            slice = "";
            continue; // 부호 넣지 않음
        }

        slice += s[i]; // 숫자 추가
    }

    cout << result;
}