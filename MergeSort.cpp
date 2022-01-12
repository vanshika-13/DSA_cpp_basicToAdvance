// fastest among bubble,insertion,selection,etc

#include <bits/stdc++.h>
using namespace std;
void Merge(int *a, int s, int e)
{
    int mid = (e + s) / 2;
    int len1 = (mid - s + 1);
    int len2 = (e - mid);
    // creating 2 new arrays to store the half divided original array with length len1 and len2
    int *a1 = new int[len1];
    int *a2 = new int[len2];
    // copying into 2 new arrays their respective parts
    int StartIndex = s;
    for (int i = 0; i < len1; i++)
    {
        a1[i] = a[StartIndex++];
    }
    StartIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        a2[i] = a[StartIndex++];
    }

    // merging the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    StartIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (a1[index1] < a2[index2])
        {
            a[StartIndex++] = a1[index1++];
        }
        else
        {
            a[StartIndex++] = a2[index2++];
        }
    }
    while (index1 < len1)
    {
        a[StartIndex++] = a1[index1++];
    }
    while (index2 < len2)
    {
        a[StartIndex++] = a2[index2++];
    }

    // freeing memory
    delete[] a1;
    delete[] a2;
}
void MergeSort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // left part sort
    MergeSort(a, s, mid);

    // right part sort
    MergeSort(a, mid + 1, e);

    // merge
    Merge(a, s, e);
}
int main()
{
    int a[7] = {38, 27, 43, 3, 9, 82, 10};
    MergeSort(a, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


/*Drawbacks of Merge Sort

Slower comparative to the other sort algorithms for smaller tasks.
Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
It goes through the whole process even if the array is sorted.




Applications of Merge Sort 

Merge Sort is useful for sorting linked lists in O(nLogn) time. In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. Unlike arrays, linked list nodes may not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1) extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.
In arrays, we can do random access as elements are contiguous in memory. Let us say we have an integer (4-byte) array A and let the address of A[0] be x then to access A[i], we can directly access the memory at (x + i*4). Unlike arrays, we can not do random access in the linked list. Quick Sort requires a lot of this kind of access. In a linked list to access i’th index, we have to travel each and every node from the head to i’th node as we don’t have a continuous block of memory. Therefore, the overhead increases for quicksort. Merge sort accesses data sequentially and the need of random access is low.
Inversion Count Problem
Used in External Sorting
*/