#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int a = n, b = m;
	while (m != 0)
	{
		int temp = n % m;
		n = m;
		m = temp;
	} // 유클리드 호제법

	answer.push_back(n);
	answer.push_back((a * b) / answer[0]);

	return answer;
}