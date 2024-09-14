#include <iostream>
using namespace std;

void sortArrayWith012Naive(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int temp[n];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void sortArrayWith012(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void sortAroundAPivot(int arr[], int n, int pivot)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] < pivot)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == pivot)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void sortInRange(int arr[], int n, int l, int r)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] < l)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] >= l && arr[mid] <= r)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    // int arr[] = {1, 2, 0, 0, 1, 2, 1};
    // sortArrayWith012(arr, 7);
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // return 0;
    // int arr[7] = {3, 2, 1, 4, 5, 6, 2};
    // sortAroundAPivot(arr, 7, 2);
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[7] = {3, 2, 1, 4, 5, 6, 7};
    // sortInRange(arr, 7, 3, 5);
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int arr[] = {1, 2, 0, 0, 1, 2, 1};
    sortArrayWith012Naive(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}