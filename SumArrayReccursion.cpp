// print sum of array through reccursion
#include <bits/stdc++.h>
using namespace std;
int sum;
int sumArray(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    sum = a[0] + sumArray(a + 1, n - 1);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    sumArray(a, 5);
    cout << sum;
    return 0;
}