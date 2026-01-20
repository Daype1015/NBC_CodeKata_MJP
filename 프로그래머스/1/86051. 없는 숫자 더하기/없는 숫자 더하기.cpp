#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int values : numbers)
    {
        answer += values;
    }
    answer = 45 - answer;
    return answer;
}