#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r]; // 맨 오른쪽 값을 피벗으로 잡음
    int i = (l - 1);

    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partition(arr, l, r);

        quickSort(arr, l, p - 1); // 왼쪽 그룹 졍렬
        quickSort(arr, r + 1, r); // 오른쪽 그룹 정렬
    }
}

int main()
{
    int arr[] = {20, 10, 30, 40, 50, 70};

    quickSort(arr, 0, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}