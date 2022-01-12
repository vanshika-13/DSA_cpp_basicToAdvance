// check if given string s1 is palimdronic part of s2
#include <bits/stdc++.h>
using namespace std;
bool checkequal(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
bool ispalindrome(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int val = s1[i] - 'a';
        count1[val]++;
    }
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    // for window 1
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkequal(count1, count2))
    {
        return 1;
    }
    // for rest windows
    while (i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        index = s2[i - windowSize] - 'a';
        count2[index]--;
        i++;
        if (checkequal(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << ispalindrome(s1, s2);
}
