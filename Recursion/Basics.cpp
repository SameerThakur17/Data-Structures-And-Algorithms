#include <iostream>
using namespace std;

void printNTimes(int n)
{
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
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    example1Recursion(n - 1);
    cout << n << endl;
}

void example2Recursion()
{
}

int main()
{
    // printNTimes(5);
    example1Recursion(3);
    return 0;
}