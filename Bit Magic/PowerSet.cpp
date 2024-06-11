#include <bits/stdc++.h>
using namespace std;

void powerSet(string s)
{
    /*
    Time Complexity O(2^n*n)
    Space Complexity O(1)
    */
    int length = s.length();
    int powSize = pow(2, length);
    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < length; j++)
        {
            if ((counter & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << "\n";
    }
}

int main()
{
    powerSet("abc");
    return 0;
}