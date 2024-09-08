#include <bits/stdc++.h>
using namespace std;

int chocolateDistribution(int arr[], int n, int m)
{
    if (n < m)
    {
        return -1;
    }
    sort(arr, arr + n);
    int minDiff = arr[m - 1] - arr[0];
    for (int i = 1; i + m - 1 < n; i++)
    {
        minDiff = min(minDiff, arr[i + m - 1] - arr[i]);
    }
    return minDiff;
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    cout << chocolateDistribution(arr, 7, 3);
    return 0;
}