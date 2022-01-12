// MACRO -> a piece of code that can replaced by a macro once it is defined.
// ADVANTAGES -> no extra space used
//            -> non changeable

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14

int main()
{
    double area;
    int r = 5;
    area = PI * r * r;
    cout << area;
    return 0;
}