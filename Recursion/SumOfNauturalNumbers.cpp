#include <iostream>
using namespace std;

int sumOfNNumbers(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfNNumbers(n - 1);
}

int main()
{
    cout << sumOfNNumbers(5);
    return 0;
}