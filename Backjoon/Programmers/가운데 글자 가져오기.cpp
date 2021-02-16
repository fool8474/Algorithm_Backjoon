#include <string>
#include <stdlib.h>

#include <iostream>
using namespace std;

string solution(string s) {
	return s.length() & 1 ? s.substr(s.length() * 0.5, 1) : s.substr(s.length() * 0.5 - 1, 2);
}