#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), [](const char &s1, const char &s2){
       return s1 > s2; 
    });
    answer = s;
    return answer;
}