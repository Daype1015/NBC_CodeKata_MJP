#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> answerstr;
    int indexCards1 = 0;
    int indexCards2 = 0;
    for(int i = 0; i < goal.size(); i++)
    {
        if(goal[i] == cards1[indexCards1])
        {
            answerstr.push_back(cards1[indexCards1]);
            indexCards1++;
        }
        else if(goal[i] == cards2[indexCards2])
        {
            answerstr.push_back(cards2[indexCards2]);
            indexCards2++;
        }
    }
    
    if(answerstr == goal)
    {
        answer = "Yes";
    }
    else
    {
        answer = "No";
    }
    return answer;
}