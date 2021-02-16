#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

void �Ҿ������ȣ_1541()
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
            continue; // ��ȣ ���� ����
        }

        slice += s[i]; // ���� �߰�
    }

    cout << result;
}