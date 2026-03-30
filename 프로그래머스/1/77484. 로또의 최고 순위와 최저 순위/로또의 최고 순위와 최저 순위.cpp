#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> zero;
    int equalMax = 0;
    int equalMin = 0;
    for(auto& value : lottos)
    {
        if(value == 0)
        {
            zero.push_back(value);
        }
        else
        {
            for(auto& equalValue : win_nums)
            {
                if(value == equalValue)
                {
                    equalMax++;
                }
            }
        }
    }
    
    equalMin += equalMax;
    if(equalMin == 0)
    {
        equalMin++;
    }
    
    equalMax += zero.size();
    
    switch (equalMax)
    {
        case 6: answer.push_back(1);
            break;
        case 5: answer.push_back(2);
            break;
        case 4: answer.push_back(3);
            break;
        case 3: answer.push_back(4);
            break;
        case 2: answer.push_back(5);
            break;
        default: answer.push_back(6);
    }
    
    switch (equalMin)
    {
        case 6: answer.push_back(1);
            break;
        case 5: answer.push_back(2);
            break;
        case 4: answer.push_back(3);
            break;
        case 3: answer.push_back(4);
            break;
        case 2: answer.push_back(5);
            break;
        default: answer.push_back(6);
    }
    
    
    return answer;
}