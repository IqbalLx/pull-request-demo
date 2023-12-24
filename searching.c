#include <stdio.h>

int sequential_search(int *arr, int arr_length, int target)
{
    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    printf("Angka 3 berada pada index: %d\n", sequential_search(arr, 5, 3));

    return 0;
}