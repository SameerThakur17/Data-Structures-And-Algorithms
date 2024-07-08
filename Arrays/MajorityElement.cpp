#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return i;
        }
    }
    return -1;
}
int majorityElementOptimzed(int arr[], int n)
{

    // Phase 1
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    // Phase 2
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
    }
    if (count < n / 2)
    {
        return -1;
    }
    return res;
}

int main()
{
    int arr[8] = {1, 4, 3, 4, 4, 5, 4, 4};
    // cout << majorityElement(arr, 8);
    cout << majorityElementOptimzed(arr, 8);
    return 0;
}