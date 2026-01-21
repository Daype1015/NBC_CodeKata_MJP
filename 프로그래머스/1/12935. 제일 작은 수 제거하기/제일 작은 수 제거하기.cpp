#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_index = min_element(arr.begin(), arr.end()) - arr.begin();
    arr.erase(arr.begin() + min_index);
    if(arr.empty())
    {
        arr.push_back(-1);
    }
    answer = arr;
    return answer;
}