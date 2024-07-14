#include <iostream>
using namespace std;

int count1sInSortedArray(bool arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (n - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    bool arr[5] = {0, 0, 1, 1, 1};
    cout << count1sInSortedArray(arr, 5);
    return 0;
}