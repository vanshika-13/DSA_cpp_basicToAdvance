#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> arr, int n, int m, int mid)
{
    int stcount = 1;
    int nopage = 0;
    for (int i = 0; i < n; i++)
    {
        if (nopage + arr[i] <= mid)
        {
            nopage += arr[i];
        }
        else
        {
            stcount++;
            if (stcount > m || arr[i] > mid)
            {
                return false;
            }
            nopage = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {12, 34, 67, 90};
    cout << allocateBooks(v, 4, 2);
}