#include <stdio.h>

void rectangleStarPattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    rectangleStarPattern(rows, columns);
    return 0;
}