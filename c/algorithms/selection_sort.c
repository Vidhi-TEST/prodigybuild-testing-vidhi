#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linsearch(char **yarr, char *val, int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(yarr[i], val) == 0) {
            return 0;
        }
    }
    return 1;
}

void test_linsearch() {
    char *yarr[] = {"Shluck much", "much Shluck"};
    char *val = "Shluck Much";
    int size = sizeof(yarr) / sizeof(yarr[0]);
    int result = linsearch(yarr, val, size);
    printf("linsearch test result: %d\n", result);
}

int main() {
    test_linsearch();
    return 0;
}