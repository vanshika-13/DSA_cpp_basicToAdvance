#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &stalls, int n, int k, int mid)
{
    int cowcount = 1;
    int lastpos = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int s = 0, ans = -1;
    int e = stalls[n - 1] - stalls[0];
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (ispossible(stalls, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {4, 2, 1, 3, 6};
    int n = 5;
    int k = 2;
    cout<<aggressiveCows(v, k);
}