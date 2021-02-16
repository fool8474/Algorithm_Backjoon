#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	for (int i = 0; i < prices.size(); i++)	answer.push_back(-1);
	for (int i = 1; i < prices.size(); i++) // after
		for (int j = 0; j < i; j++) // prev for
			if (prices[j] > prices[i] && answer[j] == -1) answer[j] = i - j;
	for (int i = 0; i < prices.size(); i++) 
		if (answer[i] == -1) 
			answer[i] = prices.size() - 1 - i;
	return answer;
}