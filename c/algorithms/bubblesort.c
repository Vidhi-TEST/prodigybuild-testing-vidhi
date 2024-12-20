#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int *array, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void test_bubble_sort() {
    int test1[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int len1 = sizeof(test1) / sizeof(test1[0]);
    bubble_sort(test1, len1);
    for (int i = 0; i < len1 - 1; i++) {
        if (test1[i] > test1[i + 1]) {
            printf("Test case 1 failed\n");
            return;
        }
    }
    printf("Test case 1 passed\n");

    int test2[] = {5, 4, 3, 2, 1};
    int len2 = sizeof(test2) / sizeof(test2[0]);
    bubble_sort(test2, len2);
    for (int i = 0; i < len2 - 1; i++) {
        if (test2[i] > test2[i + 1]) {
            printf("Test case 2 failed\n");
            return;
        }
    }
    printf("Test case 2 passed\n");

    int test3[] = {1, 2, 3, 4, 5};
    int len3 = sizeof(test3) / sizeof(test3[0]);
    bubble_sort(test3, len3);
    for (int i = 0; i < len3 - 1; i++) {
        if (test3[i] > test3[i + 1]) {
            printf("Test case 3 failed\n");
            return;
        }
    }
    printf("Test case 3 passed\n");
}

int main(void) {
    test_bubble_sort();
    return 0;
}