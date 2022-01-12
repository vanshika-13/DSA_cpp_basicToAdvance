#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> v, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = v[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (v[j] > temp)
            {
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
        }
        v[j + 1] = temp;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v = {2, 1, 6, 3, 4, 8, 5};
    insertionSort(v, 7);
}