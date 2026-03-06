#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i = 0; i < food.size(); i++)
    {
        for(int j = 0; j < (food[i] / 2); j++)
        {
            answer += to_string(i);
        }
    }
    /*answer += to_string(0);
    
    for(int i = food.size(); i > 0; i--)
    {
        for(int j = 0; j < (food[i] / 2); j++)
        {
            answer += to_string(i);
        }
    }*/
    return answer + "0" + string(answer.rbegin(), answer.rend());
}