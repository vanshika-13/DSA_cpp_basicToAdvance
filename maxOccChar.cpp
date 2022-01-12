// tell the maximum times occuring character in a string
#include <bits/stdc++.h>
using namespace std;
char maxOccChar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int val = s[i] - 'a';
        arr[val]++;
    }
    int maxi = -1, ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << maxOccChar(s);
}