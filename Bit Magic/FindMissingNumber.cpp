#include <iostream>
using namespace std;

int missingNumberNaive(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int sum_with_missing_number = 0;
    for (int i = 0; i < n; i++)
    {
        sum_with_missing_number += arr[i];
    }
    int sum = n * (n + 1) / 2;
    return sum - sum_with_missing_number;
}
int missingNumberOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int xor_res = 0;
    for (int i = 0; i < n; i++)
    {
        xor_res ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xor_res ^= i;
    }
    return xor_res;
}

int main()
{
    int arr[6] = {1, 3, 4, 2, 5};
    cout << missingNumberNaive(arr, 6) << endl;
    cout << missingNumberOptimized(arr, 6) << endl;
    return 0;
}