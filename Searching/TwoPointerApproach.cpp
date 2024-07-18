#include <iostream>
using namespace std;

// * Pair with given sum in an unsorted array
// Approach 1 - The naive will have a time complexity of O(n^2)
// Approach 2 - The optimized approach for unsorted array is using hash table with O(n) space and time complexity [Best]
// Approach 3 - Another approach could be to sort the array and then use two pointer aaproach [ O(nlogn) + O(n)]= O(nlogn)
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
// Approach - Two pointer [Best]
bool pairSumSortedArray(int arr[], int n, int sum)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
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

// *Triplet with given sum in unsorted array
// Approach 1 - The naive approavh with three loops O(n^3)
// Approach 2 - Sort and then use the two pointer approach O(n^2) [Best]
// Approach 3 - Use hash table and two pointer approach O(n^2) Time Complexity and O(n) Space Complexity
bool tripletWithSumUnsorted(int arr[], int n, int sum)
{
    // Approach 1
    /*
    Time Complexity O(n^3)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

// * Triplet with given sum in sorted array
// Approach two pointer approach [best]
bool pairSumInSortedArray(int arr[], int low, int high, int sum)
{
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
bool tripletSumSorted(int arr[], int n, int sum)
{
    // Two pointer approach
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        if (pairSumInSortedArray(arr, i + 1, n - 1, sum - arr[i]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 7, 9, 3, 4};
    // pairWithSumUnsorted(arr, 5, 10);
    // cout << tripletWithSumUnsorted(arr, 5, 18);

    int brr[6] = {1, 4, 6, 7, 9, 10};
    // cout << pairSumSortedArray(brr, 5, 10);
    cout << tripletSumSorted(brr, 6, 10);
    return 0;
}