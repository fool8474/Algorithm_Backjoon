#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

string solution(vector<string> seoul) {
    return "�輭���� " + to_string(distance(seoul.begin(), find(seoul.begin(), seoul.end(), "Kim"))) + "�� �ִ�";
}