#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9};
    int maxIndex = arr.size() - 1; // Renamed for clarity
    int minIndex = 0, farea = 0, ar = 0;

    // Change the condition to minIndex < maxIndex
    while (minIndex < maxIndex)
    {
        // Calculate area based on the heights at minIndex and maxIndex
        if (arr[minIndex] > arr[maxIndex])
        {
            ar = arr[maxIndex] * (maxIndex - minIndex - 1); // Corrected area calculation
        }
        else
        {
            ar = arr[minIndex] * (maxIndex - minIndex - 1); // Corrected area calculation
        }

        // Update farea if ar is greater
        if (farea < ar)
        {
            farea = ar;
        }

        // Move the pointers
        if (arr[minIndex] < arr[maxIndex])
        {
            ++minIndex; // Move minIndex up
        }
        else
        {
            --maxIndex; // Move maxIndex down
        }
    }

    cout << "Result = " << farea;

    return 0;
}
