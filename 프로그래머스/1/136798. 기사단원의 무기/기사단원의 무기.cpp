#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++)
    {
        int factor = 0;
        for(int j = 1; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                factor++;
                if(j != i / j) factor++;
            }
        }
        if(factor > limit)
        {
            factor = power;
        }
        answer += factor;
    }
    return answer;
}