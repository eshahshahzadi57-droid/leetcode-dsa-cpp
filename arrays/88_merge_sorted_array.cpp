#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1;        // last valid element in nums1
        int j = n - 1;        // last element in nums2
        int k = m + n - 1;    // last position in nums1

        // merge from back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
            }

        // if nums2 still has elements
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main(){
    Solution obj;

    int m, n;

    cout << "Enter size of nums1 (m elements only): ";
    cin >> m;

    cout << "Enter size of nums2: ";
    cin >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    cout << "Enter nums1 elements (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    // fill remaining nums1 with 0 (optional, already vector does)
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    cout << "Enter nums2 elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    obj.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    return 0;
}