#include <stdio.h>
#include <stdlib.h>


// function to merge the sub-arrays
void merge(int a[], int low, int mid, int high) {
    int b[20]; //same size of a[]
    int i, j, k;
    i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++]; //copying the elements 
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= high)
        b[k++] = a[j++];
    for (k = low; k <= high; k++)
        a[k] = b[k];
}

// merge sort function
void mergesort(int a[], int low, int high) {
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);
    merge(a, low, mid, high);
}


    return 0;
}