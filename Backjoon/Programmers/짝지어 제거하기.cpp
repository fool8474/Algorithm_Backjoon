#include<string>
#include<vector>
using namespace std;
int solution(string s)
{
    vector<char> cVec;
    for (int i = 0; i < s.length(); i++)
    {
        cVec.push_back(s[i]);
        while (cVec.size() >= 2 && cVec[cVec.size() - 2] == cVec[cVec.size() - 1])
            cVec.erase(cVec.end() - 2, cVec.end());
    }

    return cVec.size() == 0 ? 1 : 0;
}