#include <bits/stdc++.h>
using namespace std;

int minDifferenceNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res;
}
int minDifferenceOptimized(int arr[], int n)
{
    /*
    Time Complexity O(nlogn)
    Space Complexity O(1)
    */
    int res = INT_MAX;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        res = min(res, arr[i] - arr[i - 1]);
    }
    return res;
}

int main()
{
    int arr[] = {10, 8, 1, 4};
    cout << minDifferenceNaive(arr, 4) << endl;
    cout << minDifferenceOptimized(arr, 4) << endl;
    return 0;
}