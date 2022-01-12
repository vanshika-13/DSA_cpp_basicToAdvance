#include <bits/stdc++.h>
using namespace std;
int firstOcc(vector<int> arr, int key)
{
    int n = arr.size(), ans;
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int lastOcc(vector<int> arr, int key)
{
    int n = arr.size(), ans;
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 3, 3, 3, 4, 5, 6};
    cout << "first " << firstOcc(v, 3);
    cout << "last " << lastOcc(v, 3);
}