#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	bool isSu = true;
	for (int i = 0; i < n; i++)
	{
		answer += isSu ? "¼ö" : "¹Ú";
		isSu = !isSu;
	}

	return answer;
}