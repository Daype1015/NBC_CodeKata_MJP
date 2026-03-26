#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int value : section)
        {
            if(i == value)
            {
                answer++;
                i+=m;
            }
        }
    }
    return answer;
}