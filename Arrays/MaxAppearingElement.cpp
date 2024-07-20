#include <bits/stdc++.h>
using namespace std;

// *Given N ranges,find the maximum appearing element in the ranges
/*
    Naive Method -Tranverse all ranges and use hash map
    Time Complexity - O(n*m)  [m= maximum elements in a range, n= total ranges]
    Space Complexity - O(n)
*/
/*
    If the ranges are not very large then we can optimize the solution of the problem
    Efficient Solution - Using Prefix Sum
*/

int maxCountOfElementInRange(int l[], int r[], int n)
{
    vector<int> arr(1000);

    for (int i = 0; i < n; i++)
    {
        arr[l[i]]++;
        arr[r[i] + 1]--;
    }
    int maxElement = arr[0];
    for (int i = 1; i < 1000; i++)
    {
        arr[i] += arr[i - 1];
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main()
{
    int l[3] = {1, 2, 3};
    int r[3] = {3, 5, 7};
    cout << maxCountOfElementInRange(l, r, 3);
    return 0;
}