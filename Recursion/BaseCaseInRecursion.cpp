#include <iostream>
using namespace std;

int factorial(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int fibonacci(int n)
{
    /*
    Time Complexity O(2^n)
    Space Complexity O(n)
    */
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(2) << endl;
    cout << factorial(5);
    return 0;
}