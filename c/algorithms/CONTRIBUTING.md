#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Test for Rule 1: Issues must detail what exactly is the problem
void testRule1() {
    char issue[] = "Issue: Problem with function X";
    printf("Issue: %s\n", issue);
}

// Test for Rule 2: Code must be clean, meaning no excessive use of comments, and please don't make walls of code.
void testRule2() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("Sum: %d\n", sum);
}

// Test for Rule 3: All algorithms must be programmed in C.
void testRule3() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    testRule1();
    testRule2();
    testRule3();
    return 0;
}