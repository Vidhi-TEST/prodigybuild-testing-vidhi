#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertion_sort(int *array, int len) {
    for (int i = 1; i < len; i++) {
        int key = array[i];
        int j = i - 1;
        
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        
        array[j + 1] = key;
    }
}

void test_insertion_sort() {
    int test1[] = {5, 6, 4, 3, 9};
    int len1 = sizeof(test1) / sizeof(test1[0]);
    insertion_sort(test1, len1);
    for (int i = 0; i < len1; i++) {
        printf("%d ", test1[i]);
    }
    printf("\n");

    int test2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len2 = sizeof(test2) / sizeof(test2[0]);
    insertion_sort(test2, len2);
    for (int i = 0; i < len2; i++) {
        printf("%d ", test2[i]);
    }
    printf("\n");

    int test3[] = {1, 2, 3, 4, 5};
    int len3 = sizeof(test3) / sizeof(test3[0]);
    insertion_sort(test3, len3);
    for (int i = 0; i < len3; i++) {
        printf("%d ", test3[i]);
    }
    printf("\n");
}

int main() {
    test_insertion_sort();
    return 0;
}