#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int largest = 0;
    int second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            second_largest = largest;
            largest = i;
        }
        else if (arr[i] < arr[largest])
        {
            if (second_largest == -1 || arr[i] > arr[second_largest])
            {
                second_largest = i;
            }
        }
    }
    return second_largest;
}

int largest(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

int naiveSecondLargest(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int large = largest(arr, n);
    int secondlarge = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[large])
        {
            if (secondlarge == -1)
            {
                secondlarge = i;
            }
            else if (arr[i] > arr[secondlarge])
            {
                secondlarge = i;
            }
        }
    }
    return secondlarge;
}
int main()
{
    int arr[5] = {10, 10, 10};
    cout << secondLargest(arr, 3);
    // cout << naiveSecondLargest(arr, 3);
    return 0;
}