#include <string>
#include <vector>

using namespace std;

string SolveTwoToTen(int n, int length)
{
    string map = "";
    int num = 1;
    for (int i = 0; i < length-1; i++) num *= 2;
    while (num > 0)
    {
        if (n < num) map += ' ';
        else
        {
            n -= num;
            map += '#';
        }
        num /= 2;
    }
    return map;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < arr1.size(); i++)
    {
        string n1 = SolveTwoToTen(arr1[i], n);
        string n2 = SolveTwoToTen(arr2[i], n);
        string result = "";
        for (int j = 0; j < n1.size(); j++)
        {
            if (n1[j] == '#' || n2[j] == '#') result += '#';
            else result += ' ';
        }
        answer.push_back(result);
    }
    return answer;
}



// 혹은

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < n; i++) {
        arr1[i] = arr1[i] | arr2[i]; // 비트연산자를 사용하면 단번에 2진수간 연산이 가능하다!
        string ans = "";
        for (int j = 0; j < n; j++) {
            if (arr1[i] % 2 == 0) ans = " " + ans;
            else ans = "#" + ans;
            arr1[i] = arr1[i] >> 1; // /2
        }
        answer.push_back(ans);
    }
    return answer;
}
