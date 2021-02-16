#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    int count = 0;
    for (int i : d)
        if (budget - i < 0) break;
        else
        {
            count++;
            budget -= i;
        }
    return count;
}