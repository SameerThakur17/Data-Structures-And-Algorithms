#include <iostream>
using namespace std;

int factorialIterative(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int factorialRecursive(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main()
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    cout << factorialIterative(5) << endl;
    cout << factorialRecursive(6);
    return 0;
}