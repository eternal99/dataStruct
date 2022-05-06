#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp;
    int arr[10] = {1, 94, 6, 11, 10, 3, 15, 2, 13};

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}