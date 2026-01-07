#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int x = sqrt(n);
    if( n == pow(x,2))
    {
        answer = pow(x + 1, 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}