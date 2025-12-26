#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(const auto& vec : arr)
    {
        answer += (int)vec;
    }
    answer /= arr.size();
    return answer;
}