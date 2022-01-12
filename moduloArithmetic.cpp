//(a mod m)+(b mod m)  mod m=a+b  mod m
//(a mod m)−(b mod m)  mod m=a−b  mod m
//(a mod m)⋅(b mod m)  mod m=a⋅b  mod m

// Problem Statement
/*You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
Input Format :
The first line of input contains a single integer 'T', representing the number of test cases.

The first line of each test contains three space-separated integers 'X', 'N', and 'M'.
Output Format :
For each test case, return a single line containing the value of ('X' ^ 'N') % 'M'.*/
#include <bits/stdc++.h>
using namespace std;
int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << modularExponentiation(x, n, m);
}