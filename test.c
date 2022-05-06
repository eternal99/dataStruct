#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int size)
{

    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[6] = {5, 3, 1, 2, 4, 6};
    selectionSort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }
}