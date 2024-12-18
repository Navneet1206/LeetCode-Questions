#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n
        reverse(nums, 0, n - 1);  // Reverse the entire array
        reverse(nums, 0, k - 1);   // Reverse the first k elements
        reverse(nums, k, n - 1);   // Reverse the rest of the elements
    }
    
private:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

int main()
{

    int n, k;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements : \n";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the number of element want to rotate : ";
    cin >> k;
    // Create a Solution object
    Solution solution;

    // Rotate the array
    solution.rotate(nums, k);

    // Output the rotated array
    cout << "Rotated array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
