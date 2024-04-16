#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort_range(int arr[], int first, int last)
{
    if (last <= first)
        return;

    int pivot = arr[first];
    int pos = last;
    for (int i = last; i > first; --i)
    {
        if (arr[i] > pivot)
        {
            swap(&arr[i], &arr[pos]);
            --pos;
        }
    }
    swap(&arr[first], &arr[pos]);
    quick_sort_range(arr, first, pos - 1);
    quick_sort_range(arr, pos + 1, last);
}

void quick_sort(int arr[], int len)
{
    quick_sort_range(arr, 0, len - 1);
}

int main()
{
    int arr[5] = {5, 2, 6, 1, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}