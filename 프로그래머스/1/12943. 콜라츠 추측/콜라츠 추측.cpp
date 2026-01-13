#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    if(num == 1) return answer;
    long long n = num;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
            answer += 1;
        }
        else if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            answer += 1;
        }
    }
    if(answer >= 500) answer = -1;
    return answer;
}