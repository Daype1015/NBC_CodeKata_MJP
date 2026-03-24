#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> point;
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int point1 = 0;
    int point2 = 0;
    int point3 = 0;
    int arr1[5] = {1,2,3,4,5};
    int arr2[8] = {2,1,2,3,2,4,2,5};
    int arr3[10] = {3,3,1,1,2,2,4,4,5,5};
    for(int i = 0; i < answers.size(); i++)
    {
        if(index1 > 4) index1 = 0;
        if(index2 > 7) index2 = 0;
        if(index3 > 9) index3 = 0;
        if(answers[i] == arr1[index1])
        {
            point1++;
        }
        if(answers[i] == arr2[index2])
        {
            point2++;
        }
        if(answers[i] == arr3[index3])
        {
            point3++;
        }
        index1++;
        index2++;
        index3++;
    }
    point.push_back(0);
    point.push_back(point1);
    point.push_back(point2);
    point.push_back(point3);
    int maxValue = max({point1, point2, point3});
    
    for(int i = 1; i < point.size(); i++)
    {
        if(maxValue == point[i])
        {
            answer.push_back(i);
        }
    }
    return answer;
}