/*write all the permutations of the given string char array of numeric array*/
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[j], nums[index]);
        solve(nums, ans, index + 1);
        // backtracking
        swap(nums[j], nums[index]);
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}