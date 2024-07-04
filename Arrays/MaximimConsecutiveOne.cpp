#include <bits/stdc++.h>
using namespace std;

// int maxConsecutiveOne(int arr[], int n)
// {
//     int maxCount = 0;
//     int count = 0;
//     int i = 0;
//     while (i < n)
//     {
//         while (arr[i] == 1 && arr[i] == arr[i + 1])
//         {
//             if (count == 0)
//             {
//                 count += 2;
//             }
//             else
//             {
//                 count++;
//             }
//             i++;
//         }
//         maxCount = max(count, maxCount);
//         count = 0;
//         i++;
//     }
//     return maxCount;
// }

int maxConsecutiveOneNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
            res = max(res, count);
        }
    }
    return res;
}
int maxConsecutiveOne(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int res = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            res = max(count, res);
            count = 0;
        }
    }
    return res;
}

int main()
{
    int arr[9] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    // cout << maxConsecutiveOne(arr, 9);
    // cout << maxConsecutiveOneNaive(arr, 9);
    cout << maxConsecutiveOne(arr, 9);
    return 0;
}