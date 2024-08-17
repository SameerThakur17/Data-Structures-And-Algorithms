#include <iostream>
using namespace std;

// Naive Approach
void intersectionOfTwoArraysNaive(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O(n*m)
    Space Complexity O(1)
    */
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == brr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

// Optimized Approach
void intersectionOfTwoArrays(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O(n+m)
    Space Complexity O(1)
    */
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
        }
        if (arr[i] < brr[j])
        {
            i++;
        }
        else if (arr[i] > brr[j])
        {
            j++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr[6] = {1, 2, 2, 3, 3, 5};
    int brr[7] = {2, 3, 3, 4, 4, 5, 5};
    // intersectionOfTwoArraysNaive(arr, brr, 3, 3);
    intersectionOfTwoArrays(arr, brr, 6, 7);
    return 0;
}