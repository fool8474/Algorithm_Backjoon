#include <vector>
#include <algorithm>
using namespace std;
int gcd(int & a, int & b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int& a, int& b)
{
    return a * b / gcd(a, b);
}
int solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int curNum = 1;
    for (int i = 0; i < arr.size(); i++) 
        curNum = lcm(curNum, arr[i]);
    return curNum;
}