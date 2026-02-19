#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> find_num = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> replace_num = {"0","1","2","3","4","5","6","7","8","9"};
    
    for(int i = 0; i < find_num.size(); i++)
    {
        int it = 0;
       while ((it = s.find(find_num[i])) != string::npos)
        {
            s.replace(it, find_num[i].size(), to_string(i)); // 영단어를 숫자 문자열로 대체
        }
    }
    
    answer = stoi(s);
    return answer;
}