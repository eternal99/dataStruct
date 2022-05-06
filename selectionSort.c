#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size)
{
    int minIndex;
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

int main()
{
    int arr[9] = {1, 94, 6, 11, 10, 3, 15, 2, 13};

    selectionSort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}