#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int startArea = section.front();
    int endArea = section.back();
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