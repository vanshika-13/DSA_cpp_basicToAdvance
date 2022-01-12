// some more concepts of pointer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // in an array of pointers the name represents address of first array index pointer
    int a[5] = {1, 23, 43, 54, 46};
    int *ptr = a;
    cout << &a[0] << " " << a << endl; // returns same result because both represent address of first element of array a
    cout << *a << endl;                // prints value derefrenced at first index
    cout << *(a + 1) << endl;          // prints location 1 of array index
    cout << *(a) + 1;                  // prints value+1 atindex 0 of array

    //a[i] = *(a+i)
    //i[a] = *(i+a)
}