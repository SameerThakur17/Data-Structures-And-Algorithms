#include <bits/stdc++.h>
using namespace std;

int trappingRainWater(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for (int k = i + 1; k < n; k++)
        {
            rmax = max(rmax, arr[k]);
        }
        res = res + (min(lmax, rmax) - arr[i]);
    }
    return res;
}
int trappingRainWaterOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }

    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}

int main()
{
    int arr[6] = {4, 2, 0, 3, 2, 5};
    cout << trappingRainWater(arr, 6);
    return 0;
}