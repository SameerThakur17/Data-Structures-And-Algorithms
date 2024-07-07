#include <iostream>
using namespace std;

int longestEvenOddSubArrayNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] % 2 == 0 && arr[j] % 2 != 0 || arr[j] % 2 == 0 && arr[j - 1] % 2 != 0)
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

int longestEvenOddSubArrayOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] % 2 == 0 && arr[i] % 2 != 0 || arr[i] % 2 == 0 && arr[i - 1] % 2 != 0)
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{
    int arr[6] = {5, 10, 20, 6, 3, 8};
    // cout << longestEvenOddSubArrayNaive(arr, 6);
    cout << longestEvenOddSubArrayOptimized(arr, 6);
    return 0;
}