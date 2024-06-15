#include <iostream>
using namespace std;

int sumOfSubsets(int arr[], int n, int sum)
{
    /*
    Time Complexity: O(2^n)
    Space Complexity: O(n)
    */
    if (n == 0)
    {
        return sum == 0 ? 1 : 0;
    }
    return sumOfSubsets(arr, n - 1, sum) + sumOfSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 7};
    cout << sumOfSubsets(arr, 5, 10);
    return 0;
}