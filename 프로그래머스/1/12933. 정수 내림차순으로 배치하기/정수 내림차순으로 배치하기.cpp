#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    while(n >0)
    {
        num.push_back(n % 10);
        n /= 10;
    }
    
    sort(num.begin(), num.end(), [](int a, int b){return a > b;});
    
    for(int i = 0; i < num.size(); i++)
    {
        if(i == num.size() - 1)
        {
            answer += num[i];
            break;
        
        }
        answer += num[i];
        answer *= 10;
    }
    return answer;
}