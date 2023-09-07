#include <stdio.h>

// Array adt
void print_array(int arr[])
{
    // prints your array.
    // input: arr
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

int search_for(int arr[], int size, int key)
{
    // searchs for your key_ele, returns index[Linear search]
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1; // not found
}

void insert_back(int arr[], int size, int item){
    int new_size = size + 1;
    int new_arr[new_size];
    // copy 
    

}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr);
    insert_back(arr, size, 88);
    return 0;
}
