#include <stdio.h>
#include <stdlib.h>

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