// LeetCode #9 - Palindrome Number
// https://leetcode.com/problems/palindrome-number/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x,temp=x;
        long long reverse =0;
        while(n!=0){
            int r=n%10;
            reverse=reverse*10+r;
            n=n/10;
        }
        return temp==reverse;
    }
};


// Time Compexity = O(log n)
// Space Complexity = O(1)