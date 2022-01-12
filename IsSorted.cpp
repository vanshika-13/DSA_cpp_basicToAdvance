// function to check if array is sorted through reccursion

#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        isSorted(a + 1, n - 1);
    }
    return false;
}
int main()
{
    int a[5] = {2, 5, 4, 5, 6};
    cout << isSorted(a, 5);
    return 0;
}