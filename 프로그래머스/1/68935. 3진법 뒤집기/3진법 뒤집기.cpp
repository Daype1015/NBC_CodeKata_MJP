#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int divide = 0;
    vector<int> digits;
    while(n > 0)
    {
        digits.push_back(n % 3);
        n /= 3;
    }
    
    for(int i = 0; i < digits.size(); i++)
    {
       answer += digits[digits.size() - 1 - i] * pow(3, i);
    }
    return answer;
}