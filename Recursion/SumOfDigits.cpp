#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    /*
    d = digits in the number
    Time Complexity O(d)
    Space Complexity O(d)
    */
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int sumOfDigitsIterative(int n)
{
    /*
    d = digits in the number
    Time Complexity O(d)
    Space Complexity O(1)
    */
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    cout << sumOfDigits(254) << endl;
    cout << sumOfDigitsIterative(123);
    return 0;
}