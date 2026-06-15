// LeetCode # 1342 - Reduce number to zero

#include <iostream>
using namespace std;

class Solution{
public:
    int numberOfSteps(int num){
        int steps =0;
        while(num>0){
            if(num%2==0){
                num = num/2;
            }
            else{
                num -=1;
            }
            steps++;
        }
        return steps;
    }
};

int main(){
    Solution sol;
    int num=15;
    int result = sol.numberOfSteps(num);

    cout << "Input: " << num << endl;
    cout << "Number of steps: " << result<< endl;

    
    return 0;
}