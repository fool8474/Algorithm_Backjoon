#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    string nStr = to_string(n);
    for (int i = 0; i < nStr.length()-1; i++)
    {
        for (int j = i + 1; j < nStr.length(); j++)
        {
            if (nStr[i] < nStr[j])
            {
                char temp = nStr[i];
                nStr[i] = nStr[j];
                nStr[j] = temp;
            }
        }
    }
    
    return stoll(nStr);
}