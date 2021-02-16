#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                int n = nums[i] + nums[j] + nums[k];
                if (n >= 2) {
                    bool isPrime = true;
                    for (int ii = 2; ii <= sqrt(n); ii++)
                        if (n % ii == 0) {
                            isPrime = false;
                            break;
                        }
                    if (isPrime) answer++;
                }
            }
        }
    }
    return answer;
}