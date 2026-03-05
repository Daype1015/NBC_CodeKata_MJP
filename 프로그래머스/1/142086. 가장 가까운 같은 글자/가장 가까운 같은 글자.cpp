#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for(int i = 0; i < s.size(); i++)
    {
        vector<int> findValue;
        for(int j = 0; j < i; j++)
        {
            if(s[i] == s[j])
            {
                findValue.push_back(i - j);
            }
        }
        if(findValue.empty())
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(*min_element(findValue.begin(), findValue.end()));
        }
    }
    return answer;
}