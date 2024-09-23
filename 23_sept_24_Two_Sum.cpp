#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    solution s;
    int n, target;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    
    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Input the target sum
    cout << "Enter the target sum: ";
    cin >> target;

    // Get the result from twoSum function
    vector<int> result = s.twoSum(nums, target);

    // Output the result
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to the target: " 
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
