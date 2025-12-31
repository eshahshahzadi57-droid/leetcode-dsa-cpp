// LeetCode #1 - Two Sum
// https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mp.find(diff) != mp.end()) return {mp[diff], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};


// Time Compexity = O(n²)
// Space Complexity = O(1)