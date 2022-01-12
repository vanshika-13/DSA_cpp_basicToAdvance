// 1d array dynamically is the allocation of many int blocks in heap
// 2d array dynamically is the allocation of many 1d array in heap

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];   // creating double pointer rows/array to store single pointer arrays
    for (int i = 0; i < n; i++) // creating 1d arrays for n rows of 2d array created
    {
        arr[i] = new int[m];
    }

    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing  memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i]; // first delete 1d array
    }

    delete[] arr; // then delete the rows of 2d array
}