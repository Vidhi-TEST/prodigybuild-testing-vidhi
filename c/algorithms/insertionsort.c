#include <stdio.h>
#include <assert.h>

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
    
    // Unit test cases
    assert(unsorted[0] == 3);
    assert(unsorted[1] == 4);
    assert(unsorted[2] == 5);
    assert(unsorted[3] == 6);
    assert(unsorted[4] == 9);
    
    return 0;
}