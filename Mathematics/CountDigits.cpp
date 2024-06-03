#include <iostream>
#include <cmath>
using namespace std;

int countDigitsIterative(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int countDigitsRecursive(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigitsRecursive(n / 10);
}

int countDigits(int n)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return floor(log10(n) + 1);
}

int main()
{
    cout << countDigitsIterative(1233434);
    return 0;
}