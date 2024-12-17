#include <stdio.h>

void reverse_pyramid(int rows) {
    int i, j, space;

    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

void pyramid(int rows) {
    int i, j, space;

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    pyramid(rows);
    reverse_pyramid(rows - 1);
    return 0;
}

void test_reverse_pyramid() {
    // Test case 1
    printf("Test case 1:\n");
    reverse_pyramid(5);
    printf("\n");

    // Test case 2
    printf("Test case 2:\n");
    reverse_pyramid(3);
    printf("\n");

    // Test case 3
    printf("Test case 3:\n");
    reverse_pyramid(1);
    printf("\n");
}

void test_pyramid() {
    // Test case 1
    printf("Test case 1:\n");
    pyramid(5);
    printf("\n");

    // Test case 2
    printf("Test case 2:\n");
    pyramid(3);
    printf("\n");

    // Test case 3
    printf("Test case 3:\n");
    pyramid(1);
    printf("\n");
}

int main() {
    test_reverse_pyramid();
    test_pyramid();
    return 0;
}