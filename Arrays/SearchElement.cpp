#include <iostream>
using namespace std;

int isElementPresent(int arr[], int n, int element)
{
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

int main()
{
    int arr[4] = {1, 5, 6, 7};
    cout << isElementPresent(arr, 4, 6);
    return 0;
}