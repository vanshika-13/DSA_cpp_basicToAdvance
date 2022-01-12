// introduction to pointer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << num << endl;         // value of num
    cout << &num << endl;        // address of num
    cout << ptr << endl;         // value of ptr = address of num
    cout << *ptr << endl;        // value of address stored in ptr = num (dereferance operator)
    cout << &ptr << endl;        // address of ptr
    cout << sizeof(num) << endl; // size of num
    cout << sizeof(ptr) << endl; // size of pointer is always 8
    double num1 = 12.44;
    double *ptr2 = &num1;
    cout << sizeof(num1) << endl; // size of num
    cout << sizeof(ptr2) << endl; // size of pointer is always 4 irrespective of data type
    cout << ++(*ptr2) << endl;
    return 0;
}
