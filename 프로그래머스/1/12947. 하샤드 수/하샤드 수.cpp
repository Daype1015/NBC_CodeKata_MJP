#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int> num;
    int sum = 0;
    int y = x;
    while (y > 0)
    {
        num.push_back(y % 10);
        y /= 10;
    }
    for(int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }
    answer = ((x % sum) == 0) ? true : false;
    return answer;
}