// LeetCode # 13 - Roman to Int Solution
// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
using namespace std;

class Solution{
    public:
    int romanToInt(string s){
        int result=0;
        for (int i = 0; i < s.length(); i++)
        {
            int curr=value(s[i]);
            int next=value(s[i+1]);
            if(curr<next){
                result -= curr;
            }
            else{
                result += curr;
            }
        }
        return result;
    }
private:
    int value(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }
    return 0;
    }
};