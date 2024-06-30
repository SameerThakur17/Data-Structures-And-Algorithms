#include <bits/stdc++.h>
using namespace std;

int maxDifferenceNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int maxDiff = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxDiff = max(maxDiff, arr[j] - arr[i]);
        }
    }
    return maxDiff;
}
int maxDifferenceOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int minimum = arr[0];
    int maxDiff = arr[1] - arr[0];
    for (int j = 1; j < n; j++)
    {
        maxDiff = max(maxDiff, arr[j] - minimum);
        minimum = min(minimum, arr[j]);
    }
    return maxDiff;
}
int main()
{
    int arr[5] = {2, 5, 8, 6, 7};
    // cout << maxDifferenceNaive(arr, 5);
    cout << maxDifferenceOptimized(arr, 5);
    return 0;
}