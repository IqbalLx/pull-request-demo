#include <stdio.h>
#include "sorting.h"

void display_list(int *list, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", list[i]);
    }
}

int main()
{
    int arr[5] = {
        1,
        3,
        4,
        2,
        5,
    };

    printf("\n");
    printf("Original Array : ");
    display_list(arr, 5);

    sort(arr, 5, 0);
    printf("\n");
    printf("Ascending Sort Result : ");
    display_list(arr, 5);

    return 0;
}