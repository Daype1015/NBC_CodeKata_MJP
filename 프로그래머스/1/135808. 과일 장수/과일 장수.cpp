#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int boxCount = 0;
    sort(score.begin(), score.end());
    boxCount = score.size() / m;
    for(int i = 0; i < boxCount; i++)
    {
        vector<int> box;
        for(int i = 0; i < m; i++)
        {
            box.push_back(score.back());
            score.pop_back();
        }
        int boxmin = *min_element(box.begin(),box.end());
        answer += boxmin * m;
    }
    
    
    
    return answer;
}