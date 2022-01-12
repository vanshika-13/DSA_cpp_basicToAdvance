// rotate array matrix by 90 degrees
#include <bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>> v)
{
    cout << "entered inside" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    for (int j = 0; j < 3 / 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            swap(v[i][j], v[i][3 - j - 1]);
        }
    }
    cout << "exiting" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    rotate90(v);
}