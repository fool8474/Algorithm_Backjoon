#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> arr) {
    arr.erase(min_element(arr.begin(), arr.end()));
    return arr.size() == 0 ? vector<int>{-1} : arr;
}