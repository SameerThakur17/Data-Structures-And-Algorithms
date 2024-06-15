#include <iostream>
using namespace std;

void subsetsOfString(string &s, string curr = "", int index = 0)
{
    /*
    Time Complexity O(2^n)
    Space Complexity O(n)

    */
    if (index == s.length())
    {
        cout << curr << " ";
        return;
    }
    subsetsOfString(s, curr, index + 1);
    subsetsOfString(s, curr + s[index], index + 1);
}

int main()
{
    string s = "ABC";
    subsetsOfString(s);
    return 0;
}