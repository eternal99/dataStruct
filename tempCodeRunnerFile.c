int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = (l - 1);

    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}