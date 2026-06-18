// LeetCode # 189 - Rotate Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return;
        k %=n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k , n-1);
    }

private:
void reverse(vector<int>& nums, int left, int right){
        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};

int main(){
    
    return 0;
}