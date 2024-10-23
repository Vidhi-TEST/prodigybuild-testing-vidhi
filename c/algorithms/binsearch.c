#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x) {
            return mid;
        }
        
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main(int argc, char *argv[]) {
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int size = sizeof(yarr) / sizeof(yarr[0]);
    int element = atoi(argv[1]);
    
    int result = binarySearch(yarr, 0, size - 1, element);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}