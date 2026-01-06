// LeetCode # 27- Remove element from array

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        int k=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }

};

//Time Compelxity -- O(n)
//Space Complexity -- O(1)