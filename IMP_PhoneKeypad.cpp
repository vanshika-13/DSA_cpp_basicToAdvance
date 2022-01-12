/**/
#include <bits/stdc++.h>
using namespace std;
void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0'; // calculating value of given string not ASCII charachter int value
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping); // sending for adding charachters of next index
        output.pop_back();                              // backtracking to original empty output string
    }
}
int main()
{
    string digits;
    cin >> digits;
    vector<string> ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}