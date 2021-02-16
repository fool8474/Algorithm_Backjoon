using namespace std;

long long solution(long long n) {
    long long count = 0;
    while (true)
    {
        if (count * count == n) return (count + 1) * (count + 1);
        else if (count * count > n) return -1;
        count++;
    }
}