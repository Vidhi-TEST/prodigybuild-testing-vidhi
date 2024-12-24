#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int partition(int *a, int l, int h);
void quick_sort(int *a, int l, int h);

void test_quick_sort()
{
    int test1[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    quick_sort(test1, 0, size1 - 1);
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", test1[i]);
    }
    printf("\n");

    int test2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    quick_sort(test2, 0, size2 - 1);
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", test2[i]);
    }
    printf("\n");

    int test3[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    quick_sort(test3, 0, size3 - 1);
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", test3[i]);
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