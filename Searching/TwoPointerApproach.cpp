#include <iostream>
using namespace std;

// * Pair with given sum in an unsorted array
// Approach 1 - The naive will have a time complexity of O(n^2)
// Approach 2 - The optimized approach for unsorted array is using hash table with O(n) space and time complexity
// Approach 3 - Another approach could be to sort the array and then use two pointer aaproach
void pairWithSumUnsorted(int arr[], int n, int sum)
{
    // Approach 1
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

// * Pair with given sum in an sorted array
// Approach - Two pointer
bool pairSumSortedArray(int arr[], int n, int sum)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            return true;
        }
        else if (arr[low] + arr[high] > sum)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 7, 9, 3, 4};
    // pairWithSumUnsorted(arr, 5, 10);
    cout << pairSumSortedArray(arr, 5, 10);
    return 0;
}