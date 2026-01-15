#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int values : arr)
    {
        if(values % divisor == 0)
        {
            answer.push_back(values);
        }
    }
    if(!answer.empty())
    {
        sort(answer.begin(), answer.end());
    }
    else
    {
        answer.push_back(-1);
    }
    return answer;
}