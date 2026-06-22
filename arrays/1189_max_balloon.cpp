// Leetcode # 1189 - MAximum Number of Balloon

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
public:
    int maxNumOfBalloons(string text){
        unordered_map<char, int> freq;

        for(char c : text){
            freq[c]++;
        }

        return min({
            freq['b'],
            freq['a'],
            freq['l']/2,
            freq['o']/2,
            freq['n'],
        });

    }
};

int main(){
    
    return 0;
}