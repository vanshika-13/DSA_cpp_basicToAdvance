// linear search through reccursion

#include <bits/stdc++.h>
using namespace std;
bool LinearSearch(int a[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (x == a[0])
    {
        return true;
    }
    return LinearSearch(a + 1, n - 1, x);
}
int main()
{
    int a[5] = {2, 4, 3, 7, 5};
    cout << LinearSearch(a, 5, 4) << endl;
    cout << LinearSearch(a, 5, 9);
    return 0;
}