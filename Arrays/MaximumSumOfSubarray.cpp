#include <bits/stdc++.h>
using namespace std;

int maxSumOfSubArrayNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            res = max(res, currSum);
        }
    }
    return res;
}

int maxSumofSubArrayOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int maxEnding = arr[0];
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int main()
{

    return 0;
}