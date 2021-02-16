#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

string solution(vector<string> seoul) {
    return "김서방은 " + to_string(distance(seoul.begin(), find(seoul.begin(), seoul.end(), "Kim"))) + "에 있다";
}