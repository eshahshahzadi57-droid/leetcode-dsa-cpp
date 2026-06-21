// LeetCode # 217 - Contains Duplicate

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
public:
    bool containDuplicate(vector<int>& nums){
        unordered_set<int> set;

        for(int num: nums){
            if(set.count(num)){
                return true;
            }
            set.insert(num);
        }

        return false;
    }
};

int main(){
    
    return 0;
}



// beats 76%