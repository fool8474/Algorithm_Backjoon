#include <string>
#include <vector>
#include <set>
using namespace std;
vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> wordSet;
    for (int i = 0; i < words.size(); i++)
    {
        if(i == 0 || (wordSet.find(words[i]) == wordSet.end() && words[i-1][words[i-1].length()-1] == words[i][0]))
            wordSet.insert(words[i]);
        else
        {
            answer.push_back((i % n) + 1);
            answer.push_back((i / n) + 1);
            break;
        }
    }
    return answer.size() == 0 ? vector<int>{0, 0} : answer;
}