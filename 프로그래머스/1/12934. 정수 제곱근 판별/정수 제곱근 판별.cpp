#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
   for(int i = 1; i <= n; i++)
    {
	    if(n == (i * i))
        {
    	    answer = (i + 1) * (i + 1);
            break;
        }
        else
        {
    	    answer = -1;
        }
    }
    return answer;
}