//In My logic have issue to time exceed. because I am using nested loop.
//due to use of the nested loop compiler takes time to run the code in large input.
//For solving this problem I should have used recursion for fast code compilation time.


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
