#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int unsorted[] = {5, 6, 4, 3, 9};
    int len = sizeof(unsorted) / sizeof(unsorted[0]);
    
    insertion_sort(unsorted, len);
    
    return 0;
}