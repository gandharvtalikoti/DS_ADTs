#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j]<arr[min])
                min = j;            
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main()
{
    int arr[5] = {5, 2, 6, 1, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, len);

    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}