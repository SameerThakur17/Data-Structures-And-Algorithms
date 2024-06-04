#include <iostream>
using namespace std;

int powerBasic(int x, int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * x;
    }
    return res;
}
int powerBasicRecursion(int x, int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    if (n == 0)
    {
        return 1;
    }
    return x * powerBasicRecursion(x, n - 1);
}

int powerRecursiveOptimized(int x, int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        int halfpower = powerRecursiveOptimized(x, n / 2);
        return halfpower * halfpower;
        ;
    }
    return x * powerRecursiveOptimized(x, n - 1);
}
int powerRecursiveOptimized2(int x, int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n == 0)
    {
        return 1;
    }
    int temp = powerRecursiveOptimized2(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    else
    {
        return x * temp;
    }
}
int main()
{
    // cout << powerBasic(2, 5) << endl;
    // cout << powerBasicRecursion(2, 6) << endl;
    cout << powerRecursiveOptimized(2, 7) << endl;
    cout << powerRecursiveOptimized2(2, 5) << endl;
    return 0;
}