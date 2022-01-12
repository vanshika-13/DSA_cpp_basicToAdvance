// check palindrome avoiding spaces and symbols
#include <bits/stdc++.h>
using namespace std;
int getlength(string ch)
{

    int n = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        n++;
    }

    return n;
}

char lowercase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {

        return ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {

        char temp;

        temp = ch - 'A' + 'a';

        return temp;
    }
    else
    {

        return ch;
    }
}

bool checkPalindrome(string s)

{

    int end = getlength(s) - 1;

    int start = 0;

    while (start < end)
    {
        if ((lowercase(s[start]) < 97 || lowercase(s[start]) > 123) && (lowercase(s[start]) < 48 || lowercase(s[start]) > 57))
        {

            start++;

            continue;
        }

        if ((lowercase(s[end]) < 97 || lowercase(s[end]) > 123) && (lowercase(s[end]) < 48 || lowercase(s[end]) > 57))
        {

            end--;

            continue;
        }

        if (lowercase(s[start]) == lowercase(s[end]))
        {

            start++;

            end--;
        }
        else
        {

            return false;
        }
    }

    return true;
}
int main()
{
    string s;
    cin >> s;
    cout << checkPalindrome(s);
    return 0;
}