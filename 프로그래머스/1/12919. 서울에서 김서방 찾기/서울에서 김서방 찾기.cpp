#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int index = 0;
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    if (it != seoul.end())
    {
        index = distance(seoul.begin(), it);
    }
    answer = "김서방은 " + to_string(index) + "에 있다";
    return answer;
}