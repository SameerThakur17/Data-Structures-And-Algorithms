#include <iostream>
using namespace std;

void printNTimes(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
     */
    string s = "hello";
    if (n == 0)
    {
        return;
    }
    cout << s << endl;
    printNTimes(n - 1);
}

void example1Recursion(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
     */
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    example1Recursion(n - 1);
    cout << n << endl;
}

void example2Recursion(int n)
{
    /*
    Time Complexity O(2^n)
    Space Complexity O(n)
     */
    if (n == 0)
    {
        return;
    }
    example2Recursion(n - 1);
    cout << n << endl;
    example2Recursion(n - 1);
}

int main()
{
    // printNTimes(5);
    // example1Recursion(3);
    example2Recursion(5);
    return 0;
}