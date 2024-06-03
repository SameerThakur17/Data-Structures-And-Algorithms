#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return rev == n ? 1 : 0;
}

int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(123);
    return 0;
}