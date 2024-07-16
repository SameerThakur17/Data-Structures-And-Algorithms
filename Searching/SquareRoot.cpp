#include <iostream>
using namespace std;

int squareRootNaive(int n)
{
    /*
    Time Complexity O(root(n))
    Space Complexity O(1)
    */
    int i = 1;
    while (i * i <= n)
    {
        i++;
    }
    return i - 1;
}
int squareRootOptimized(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int low = 1, high = n;
    int res = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            res = mid;
        }
    }
    return res;
}
int main()
{
    // cout << squareRootNaive(4);
    cout << squareRootNaive(10);
    // cout << squareRootOptimized(10);
    return 0;
}