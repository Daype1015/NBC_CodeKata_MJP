#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> point;
    for(int i = 0; i < score.size(); i++)
    {
        int min = 0;
        if(point.size() < k)
        {
            point.push_back(score[i]);
            min = *min_element(point.begin(),point.end());
        }
        else
        {
            sort(point.rbegin(), point.rend());
            if(point[k-1] < score[i])
            {
                point.pop_back();
                point.push_back(score[i]);
                min = *min_element(point.begin(),point.end());
            }
            else
            {
                min = *min_element(point.begin(),point.end());
            }
        }
        answer.push_back(min);
    }
    return answer;
}