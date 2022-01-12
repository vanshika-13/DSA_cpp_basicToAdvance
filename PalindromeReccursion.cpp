// check if the binary format of the given number is palindrome
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(long long N)
{
    string s = "";
    int r;
    while (N > 0)
    {
        r = N % 2;
        N = N / 2;
        s.push_back(r);
    }
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
        if (s[i++] != s[j--])
            return 0;
    return 1;
}
int main()
{
    cout << checkPalindrome(13);
    return 0;
}