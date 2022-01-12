#include <bits/stdc++.h>
using namespace std;
int main()
{
    int amount, i = 1, h = 0, f = 0, t = 0, te = 0, o = 0;
    cin >> amount;
    while (amount != 0)
    {
        switch (i)
        {
        case 1:
            if (amount >= 100)
            {
                h = amount / 100; // h=13,am=30,i=2
                amount = amount - (h * 100);
            }
            i = 2;
            break;
        case 2:
            if (amount >= 50)
            {
                f = amount / 50; // f=0,am=30,i=3
                amount = amount - (f * 50);
            }
            i = 3;
            break;
        case 3:
            if (amount >= 20)
            {
                t = amount / 20; // t=1,am=10,i=4
                amount = amount - (t * 20);
            }
            i = 4;
            break;
        case 4:
            if (amount >= 10) // te=1,am=0,i=6
            {
                te = amount / 10;
                amount = amount - (te * 10);
            }
            i = 5;
            break;
        case 5:
            o = amount;
            amount = 0;
            i = 6;
            break;
        default:
            exit(0);
            break;
        }
        if (i == 6)
        {
            break;
        }
    }
    cout << "100=" << h << endl
         << "50=" << f << endl
         << "20=" << t << endl
         << "10=" << te << endl
         << "1=" << o << endl;
}