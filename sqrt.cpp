#include <bits/stdc++.h>
using namespace std;
int tempsol(int n)
{
    int l = 0;
    int h = n, ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return ans;
}
double preciseSqrt(int n, int d, int ts)
{
    double fac = 1;
    double ans = ts;
    for (int i = 0; i < d; i++)
    {
        fac = fac / 10;
        for (double j = ans; j * j < n; j = j + fac)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int tempsol = sqrt(37);
    cout << preciseSqrt(37, 3, tempsol);
}