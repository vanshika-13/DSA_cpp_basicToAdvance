// binary search using reccursion
#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int a[], int l, int h, int x)
{
    if (l > h)
    {
        return false;
    }
    int mid = l + (h - l) / 2;
    if (a[mid] == x)
    {
        return true;
    }
    if (a[mid] < x)
    {
        return BinarySearch(a, mid + 1, h, x);
    }
    else
    {
        return BinarySearch(a, l, mid - 1, x);
    }
    // return true;
}
int main()
{
    int a[5] = {2, 3, 4, 6, 8};
    cout << BinarySearch(a, 0, 4, 2) << endl;
    cout << BinarySearch(a, 0, 4, 4) << endl;
    cout << BinarySearch(a, 0, 4, 8) << endl;
    cout << BinarySearch(a, 0, 4, 3) << endl;
    return 0;
}