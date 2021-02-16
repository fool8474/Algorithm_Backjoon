#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++)
        answer += s[i] == ' ' ? ' ' : isupper(s[i]) ? (s[i] + n > 'Z' ? s[i] + n - 26 : s[i] + n) : (s[i] + n > 'z' ? s[i] + n - 26 : s[i] + n);
    return answer;
}