#include <string>
using namespace std;

bool solution(string s)
{
	int answer = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P') answer++;
		else if (s[i] == 'y' || s[i] == 'Y') answer--;
	}
	return answer == 0 ? true : false;
}