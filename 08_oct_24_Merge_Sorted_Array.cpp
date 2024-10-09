#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  
        int j = n - 1;  
        int k = m + n - 1;  
        
        // Merge nums1 and nums2 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, add them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    Solution solution;

    // User input for nums1
    int m, n;
    cout << "Enter the number of initialized elements in nums1: ";
    cin >> m;
    cout << "Enter the number of initialized elements in nums2: ";
    cin >> n;

    vector<int> nums1(m + n); // Create nums1 with enough space
    cout << "Enter the elements of nums1 (sorted): ";
    for (int i = 0; i < m; ++i) {
        cin >> nums1[i];
    }

    // Fill the remaining space in nums1 with zeros
    for (int i = m; i < m + n; ++i) {
        nums1[i] = 0; // Assuming the remaining space is filled with zeros
    }

    vector<int> nums2(n);
    cout << "Enter the elements of nums2 (sorted): ";
    for (int i = 0; i < n; ++i) {
        cin >> nums2[i];
    }

    // Call the merge function
    solution.merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
