#include <iostream>
using namespace std;

int josephusProblem(int n, int k)
{
    /*
    Time Complexity: O(n)
    Space Complexity: O(n)
    */
    if (n == 1)
    {
        return 0;
    }
    return (josephusProblem(n - 1, k) + k) % n;
}

int main()
{
    cout << josephusProblem(5, 3);
    return 0;
}