// Inversion count is the process of counting numbers that are smaller than the previous number in a giver array
// if a[i]>a[j] when i<j
// Brute force - O(n^2)

/*#include <bits/stdc++.h>
using namespace std;
int BruteCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                count++;
                cout << "(" << a[i] << " " << a[j] << ")";
            }
        }
        cout << endl;
    }
    return count;
}
int main()
{
    int a[8] = {3, 5, 6, 9, 1, 2, 7, 8};
    cout << BruteCount(a, 8);
    return 0;
}
*/

// Optimised way

// here we will use merge sort technique
// while dividing the array into parts we will count inversions of left part and inversions of right part
//  and inversions while merging these array back
// for the inversions of merging process there will be n-i inversions because if the first element of
//  second array is less than the element of first array then it will be less than every element of first aaray.
#include <bits/stdc++.h>
using namespace std;
int Merge(int a[], int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid; // e-(mid+1)+1
    int *a1 = new int[len1];
    int *a2 = new int[len2];
    int invcount = 0;
    int startIndex = s;
    for (int i = 0; i < len1; i++)
    {
        a1[i] = a[startIndex++];
    }
    startIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        a2[i] = a[startIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    startIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (a1[index1] < a2[index2])
        {
            a[startIndex++] = a1[index1++];
        }
        else
        {
            invcount += len1 - index1;
            a[startIndex++] = a2[index2++];
        }
    }
    while (index1 < len1)
    {
        a[startIndex++] = a1[index1++];
    }
    while (index2 < len2)
    {
        a[startIndex++] = a2[index2++];
    }
    return invcount;
}
int MergeSort(int a[], int s, int e)
{
    int inc = 0;
    int mid = (s + e) / 2;
    if (s >= e)
    {
        return inc;
    }
    // sorting left part
    inc = inc + MergeSort(a, s, mid);
    // right part sort
    inc = inc + MergeSort(a, mid + 1, e);
    // inversions while merging
    inc = inc + Merge(a, s, mid, e);
}
int main()
{
    int a[8] = {3, 5, 6, 9, 1, 2, 7, 8};
    cout << MergeSort(a, 0, 7);
    return 0;
}