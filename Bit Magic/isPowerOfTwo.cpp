#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        n = n >> 1;
    }
    return true;
}

bool isPowerOfTwoOptimized(int n)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    if (n == 0)
    {
        return false;
    }
    return ((n & (n - 1)) == 0);
}

bool isPowerOfTwoOneLiner(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    return (n != 0) && ((n & (n - 1)) == 0);
}
int main()
{
    cout << isPowerOfTwo(16) << endl;
    cout << isPowerOfTwo(6) << endl;
    cout << isPowerOfTwoOneLiner(16) << endl;
    cout << isPowerOfTwoOneLiner(6) << endl;
    cout << isPowerOfTwoOptimized(16) << endl;
    cout << isPowerOfTwoOptimized(6) << endl;
    return 0;
}