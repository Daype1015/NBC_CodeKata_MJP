#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int sum)
{
    if(sum < 2) return false;
    for(int i = 2; i <= sqrt(sum); i++)
    {
        if(sum % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int i = 0; i <= nums.size(); i++)
    {
        int sum = 0;
        for(int j = i + 1; j < nums.size(); j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                if(isPrime(sum))
                {
                    answer++;
                }
            }
        }
    }
    
    
    return answer;
}

