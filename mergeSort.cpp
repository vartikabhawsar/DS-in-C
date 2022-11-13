#include <stdio.h>
mergesort(int a[], int high, int low)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;
        mergesort(int a[], int mid, int low);
        mergesort(int a[], int high, int mid + 1);
        merge(int a[], int high, int mid, int low);
    }
}
int b[];
merge(int a[], int high, int mid, int low)
{
    int i = low, j = low, k = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[k])
        {
            b[j] = a[i];
            i++;
        }
        else
        {
            b[j] = a[k];
            k++;
        }
        j++;
    }
    if (i > mid)
    {
        for (int l = k; l < high; l++)
        {
            b[j] = a[l];
            j++;
        }
    }
    else
    {

        for (int l = i; i < mid; l++)
        {
            b[j] = a[l];
            i++;
        }
    }
    for (int l = low; l < high; l++)
    {
        a[l] = b[l];
    }
}
int main()
{
    int a[10], n;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    return 0;
}