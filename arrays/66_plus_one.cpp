// Leetcode # 66 - Plus One 

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> plusOne( vector<int>& digits){
        for (int i = digits.size()-1; i >=0 ; i++)
        {
            if (digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main(){
    Solution obj;

    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter digits: ";

    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}