#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int partition(int *a, int l, int h);
void quick_sort(int *a, int l, int h);

void test_quick_sort()
{
    int arr1[] = {5, 2, 8, 1, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    quick_sort(arr1, 0, size1 - 1);
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int arr2[] = {10, 5, 3, 7, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    quick_sort(arr2, 0, size2 - 1);
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    int arr3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    quick_sort(arr3, 0, size3 - 1);
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    int arr4[] = {5, 4, 3, 2, 1};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    quick_sort(arr4, 0, size4 - 1);
    for (int i = 0; i < size4; i++)
    {
        printf("%d ", arr4[i]);
    }
    printf("\n");
}

int main()
{
    test_quick_sort();
    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int partition(int a[], int l, int h)
{
    int i = l, j = l, p = h;

    while (i < h)
    {
        if (a[i] < a[p])
        {
            swap(&a[i], &a[j]);
            j++;
        }
        i++;
    }

    swap(&a[p], &a[j]);

    return j;
}

void quick_sort(int a[], int l, int h)
{
    int p;

    if (l < h)
    {
        p = partition(a, l, h);
        quick_sort(a, l, p - 1);
        quick_sort(a, p + 1, h);
    }

    return;
}