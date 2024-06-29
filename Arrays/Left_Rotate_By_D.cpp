#include <iostream>
using namespace std;

void left_rotate_by_1(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int last = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = last;
}

void left_rotate_by_d_naive(int arr[], int n, int d)
{
    /*
    Time Complexity O(d*n)
    Space Complexity O(1)
    */
    for (int i = 0; i < d; i++)
    {
        left_rotate_by_1(arr, n);
    }
}

void left_rotate_by_d_litte_optimized(int arr[], int n, int d)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

void reverseArr(int arr[], int left, int right)
{
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
void left_rotate_by_d_Optimized(int arr[], int n, int d)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    reverseArr(arr, 0, d - 1);
    reverseArr(arr, d, n - 1);
    reverseArr(arr, 0, n - 1);
}
int main()
{
    int arr[5] = {1, 5, 6, 7, 8};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // left_rotate_by_d_naive(arr, 5, 3);
    // left_rotate_by_d_litte_optimized(arr, 5, 3);
    left_rotate_by_d_Optimized(arr, 5, 3);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}