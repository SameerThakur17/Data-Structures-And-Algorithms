#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element)
{
    // * Linear Search works for both sorted and unsorted arrays
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int linearSearchForSortedArray(int arr[], int n, int element)
{
    // *We can use the fact that array is sorted
    /*
    Time Complexity O(position_of_element)
    Space Complexity O(1)
    */
    int i = 0;
    while (true)
    {
        if (arr[i] == element)
            return i;
        if (arr[i] > element)
            return -1;
        i++;
    }
}

int main()
{
    int arr[5] = {4, 7, 9, 10, 11};
    // cout << linearSearch(arr, 5, 1);
    cout << linearSearchForSortedArray(arr, 5, 10);
    return 0;
}