// My current logic encounters a time limit issue because it relies on a nested loop structure.
// The use of nested loops significantly increases the time complexity, causing the program to take longer to execute, especially with large input sizes.
// To address this performance problem, I should consider implementing a recursive approach, which can reduce the execution time and improve efficiency for handling larger datasets.


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
         int last = nums.size()-1;
        for(int i = 0; i<k;i++)
        {
            for(int j = 0; j<nums.size();j++)
            {
                swap(nums[last],nums[j]);
            }
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
