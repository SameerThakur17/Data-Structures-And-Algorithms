#include <bits/stdc++.h>
using namespace std;

void purmute(string &s, int i = 0)
{
    /*
    n = length of string
    Time Complexity: O(n * n!)
    Space Complexity: O(n)
    */
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        purmute(s, i + 1);
        swap(s[j], s[i]);
    }
}

int main()
{
    string s = "ABC";
    purmute(s, 0);
    return 0;
}