#include <iostream>
using namespace std;

int equilibriumPointNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        int l_sum = 0, r_sum = 0;
        for (int j = 0; j < i; j++)
        {
            l_sum += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            r_sum += arr[k];
        }
        if (l_sum == r_sum)
        {
            return i;
        }
    }
    return -1;
}
int equilibriumPointWithAuxilaryArrays(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int prefixArray[n];
    int suffixArray[n];
    prefixArray[0] = arr[0];
    suffixArray[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        prefixArray[i] = prefixArray[i - 1] + arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffixArray[i] = suffixArray[i + 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "prefix " << prefixArray[i] << " ";
        cout << "suffix " << suffixArray[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && suffixArray[1] == 0)
        {
            return i;
        }
        if (i == n - 1 && prefixArray[n - 2] == 0)
        {
            return i;
        }
        if (prefixArray[i - 1] == suffixArray[i + 1])
        {
            return i;
        }
    }
    return -1;
}

int equilibriumPointOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (lsum == sum - arr[i])
        {
            return i;
        }
        lsum += arr[i];
        sum -= arr[i];
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 4, 7, 0, 5};
    // cout << equilibriumPointNaive(arr, 5);
    // cout << equilibriumPointOptimized(arr, 5);
    cout << equilibriumPointWithAuxilaryArrays(arr, 5);
    return 0;
}