#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int key)
{
    int l = 0;
    int h = v.size() - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (v[mid] == key)
        {
            return mid + 1;
            break;
        }
        else if (v[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return 0;
}
int main()
{
    vector<int> v = {1, 2, 3, 7, 8, 9};
    cout << binarySearch(v, 7);
}