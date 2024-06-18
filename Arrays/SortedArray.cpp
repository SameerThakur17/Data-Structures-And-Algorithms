#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[4] = {4, 4, 85, 7};
    cout << isArraySorted(arr, 4);
    return 0;
}