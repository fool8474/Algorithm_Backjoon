#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void 큰_수_AB_10757()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	string s1; string s2; cin >> s1 >> s2;
    int aSize = s1.length();
    int bSize = s2.length();

    string rans = "";
    int c = 0;
    // 뒤에서 부터 계산
    while (aSize > 0 || bSize > 0) {
        int k1 = 0;
        if (aSize > 0) {
            k1 = s1[--aSize] - '0';
        }
        int k2 = 0;
        if (bSize > 0) {
            k2 = s2[--bSize] - '0';
        }
        int ret = k1 + k2 + c;
        
        c = ret / 10;
        ret %= 10; // carry
        char cur = ret + '0';
        rans += cur; // 2자리수 구현
    }
    if (c > 0) {
        rans += c + '0';
    }
    string ans = "";
    for (int i = (int)rans.length() - 1; i >= 0; --i) {
        ans += rans[i];
    }
    cout << ans;
}
