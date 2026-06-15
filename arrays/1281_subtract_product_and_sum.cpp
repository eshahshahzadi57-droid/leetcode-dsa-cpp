// LeetCode # 1281 - Subtract product and sum of digits of an integer

#include <iostream>
using namespace std;

class Solution{
public: 
    int subtractProductAndSum(int n){
        int sum =0, product =1;
        while(n>0){
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n/=10;

        }
        return product-sum;
    }
};
int main(){
    Solution sol;
    int n=112;
    cout << "Input: " << n <<endl;
    cout << "Output: " << sol.subtractProductAndSum(n);
    return 0;
}