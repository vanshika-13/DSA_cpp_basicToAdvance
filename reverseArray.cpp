#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {32, 24, 56, 34, 67, 87, 95};
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}