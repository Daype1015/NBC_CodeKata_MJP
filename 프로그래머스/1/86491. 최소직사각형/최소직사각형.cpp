#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxNum = 0;
    int min_MaxNum = 0;
    vector<int> minPrice;
    for(int i = 0; i < sizes.size(); i++)
    {
        minPrice.push_back(*min_element(sizes[i].begin(), sizes[i].end()));
        
       if(maxNum < *max_element(sizes[i].begin(), sizes[i].end()))
       {
           maxNum = *max_element(sizes[i].begin(), sizes[i].end());
       }
    }
    min_MaxNum = *max_element(minPrice.begin(), minPrice.end());
    answer = maxNum * min_MaxNum;
    return answer;
}