// LeetCode # 485 - Maximum Consecutive Ones

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int count = 0;
        int maxCount = 0;
        for(int num: nums){
            if(num == 1){
                count ++;
                if(count > maxCount){
                    maxCount = count;
                }
            }
            else{
                count =0;
            }
        }
        return maxCount;
    }
};

int main(){
    
    return 0;
}