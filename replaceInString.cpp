// replace space in a string by @40
#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str)
{
    // Write your code here.
    int l = str.length();
    string rep = "@40";
    for (int i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, rep);
        }
    }
    return str;
}
int main()
{
    string s;
    getline(cin, s);
    cout << replaceSpaces(s);
}