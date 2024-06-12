#include <iostream>
using namespace std;

void OneToN(int n)
{
    // This function is not tail recursive hence consumes more memory and space
    if (n == 0)
    {
        return;
    }
    OneToN(n - 1);
    cout << n << endl;
}
void OneToNTail(int n, int k)
{
    if (n == 0)
    {
        return;
    }
    cout << k << endl;
    OneToNTail(n - 1, k + 1);
}

int factorial(int n)
{
    // This function is not tail recursive hence consumes more memory and space
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int factorialTail(int n, int k)
{
    if (n == 0)
    {
        return k;
    }
    factorialTail(n - 1, k * n);
}
int main()
{
    // OneToN(5);
    // OneToNTail(5, 1);
    cout << factorial(5) << endl;
    cout << factorialTail(4, 1);
    return 0;
}