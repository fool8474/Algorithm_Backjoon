#include <string>
#include <vector>
using namespace std;
int getDistance(int targetPosUD, int currentPosUD, int currentPosLR)
{
	return abs(currentPosUD - targetPosUD) + abs(currentPosLR - 1);
} // Get distance from thumb to number
void setHandPosition(string& answer, int &lrPos, int &udPos, int tarLr, int tarUd, bool isLeft)
{
	lrPos = tarLr;
	udPos = tarUd;
	answer += isLeft ? "L" : "R";
} // Set Hand Position & Set Answer
string solution(vector<int> numbers, string hand) {
	string answer = "";
	int currentPosLUD = 3, currentPosRUD = 3, currentPosLLR = 0, currentPosRLR = 2;
	for (int i = 0; i < numbers.size(); i++)
	{
		int posUD = numbers[i] == 0 ? 3 : (numbers[i] - 1) / 3;
		switch (numbers[i])
		{
		case 1: case 4: case 7: // Left Case
			setHandPosition(answer, currentPosLLR, currentPosLUD, 0, posUD, true);
			break;
		case 3: case 6: case 9: // Right Case
			setHandPosition(answer, currentPosRLR, currentPosRUD, 2, posUD, false);
			break;
		case 2: case 5: case 8: case 0: // Middle Case
			if (getDistance(posUD, currentPosLUD, currentPosLLR) < getDistance(posUD, currentPosRUD, currentPosRLR))
				setHandPosition(answer, currentPosLLR, currentPosLUD, 1, posUD, true);
			else if (getDistance(posUD, currentPosLUD, currentPosLLR) > getDistance(posUD, currentPosRUD, currentPosRLR))
				setHandPosition(answer, currentPosRLR, currentPosRUD, 1, posUD, false);
			else
			{
				if (hand == "left")	setHandPosition(answer, currentPosLLR, currentPosLUD, 1, posUD, true);
				else setHandPosition(answer, currentPosRLR, currentPosRUD, 1, posUD, false);
			}
			break;
		} // end of switch
	}
	return answer;
}
