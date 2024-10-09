#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, count = 0;
    int sum = 0;
    int chem;
    cout << "Enter the number of the elements : ";
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "-1";
        exit(0);
    }
    vector<int> skill(n);
    cout << "Enter the elements : \n";
    for (int i = 0; i < skill.size(); i++)
    {
        cin >> skill[i];
    }
    cout << "Enter the K value : ";
    cin >> chem;
    int last = skill.size() - 1, first = 0;

    while (first < last)
    {
        if (((skill[first] + skill[last]) % chem) == 0)
        {
            count++;
        }
        else
        {
            cout << "False";
            exit(0);
        }
        --last;
        ++first;
    }

    if (count == (n / 2))
        cout << "\n"
             << "True";

    return 0;
}

/*
Given an array of integers arr of even length n and an integer k.

We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

Return true If you can find a way to do that or false otherwise.



Example 1:

Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
Output: true
Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).
Example 2:

Input: arr = [1,2,3,4,5,6], k = 7
Output: true
Explanation: Pairs are (1,6),(2,5) and(3,4).
Example 3:

Input: arr = [1,2,3,4,5,6], k = 10
Output: false
Explanation: You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.


Constraints:

arr.length == n
1 <= n <= 10^5
n is even.
-109 <= arr[i] <= 10^9
1 <= k <= 10^5
*/