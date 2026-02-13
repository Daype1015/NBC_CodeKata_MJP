#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            answer += s[i];
            continue;
        }
        if((s[i] + n) > 90 && s[i] < 91)
        {
            answer += (s[i] + (n - 26));
            continue;
        }
        else if((s[i] + n) > 122 && s[i] > 96)
        {
            answer += (s[i] + (n - 26));
            continue;
        }
        else
        {
            answer += s[i] + n;
        }
    }
    return answer;
}