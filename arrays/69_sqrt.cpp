// Leetcode # 69 - Sqrt

#include <iostream>
using namespace std;

class Solution{
public:
    int mySqrt(int x){
        long r=x;
        while(r*r>x){
            r=(r+x/r)/2;
        }
        return r;
    }
};

int main(){
    Solution sol;

    int num = 8;
    cout << "Input: " << num << endl;
    cout << "Output: " << sol.mySqrt(num) << endl;
    return 0;
}