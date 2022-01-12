// difference between static and dynamic allocation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // difference 1 -> SYNTAX
    int a[n];              // allocates memory at run time . causes problem in stack memory allocation->bad practice
    int *arr = new int[n]; // good parctice to allocate heap memory directly

    // difference 2 -> MEMORY SPACE TAKEN
    cout << sizeof(a) << endl;   // takes memory of  n*4
    cout << sizeof(arr) << endl; // takes memory of n*4 + 4 (pointer)

    // difference 3 -> no need to free the memory after use in static allocation : automatic
    //                 use delete keyword to free sapce in heap otherwise program crash
    delete[] arr;
    return 0;
}