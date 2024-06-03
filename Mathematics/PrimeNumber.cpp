#include <iostream>
using namespace std;

bool isPrime(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isPrimeOptimized1(int n)
{
    /*
    Time Complexity O(root(n))
    Space Complexity O(1)
    */
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isPrimeOptimized2(int n)
{
    /*
    Time Complexity O(root(n))
    Space Complexity O(1)
    */
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // cout << isPrime(1) << endl;
    // cout << isPrime(2) << endl;
    // cout << isPrime(3) << endl;
    // cout << isPrime(4) << endl;

    // cout << isPrimeOptimized1(1) << endl;
    // cout << isPrimeOptimized1(2) << endl;
    // cout << isPrimeOptimized1(3) << endl;
    // cout << isPrimeOptimized1(4) << endl;

    cout << isPrimeOptimized2(1) << endl;
    cout << isPrimeOptimized2(2) << endl;
    cout << isPrimeOptimized2(3) << endl;
    cout << isPrimeOptimized2(4) << endl;
    return 0;
}