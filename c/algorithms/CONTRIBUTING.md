#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to count numbers
void count(int num) {
    printf("[");
    if (num > 20) {
        for (int i = 0; i < num; i++) {
            printf("\n%d, \n", i);
        }
    } else {
        for (int i = 0; i < num; i++) {
            printf("%d", i);
        }
    }
    printf("]");
}

// Unit test for count function
void test_count() {
    // Test case 1: num > 20
    printf("Test case 1: num > 20\n");
    count(25);
    printf("\nExpected Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24]\n\n");

    // Test case 2: num <= 20
    printf("Test case 2: num <= 20\n");
    count(15);
    printf("\nExpected Output: 01234567891011121314\n\n");
}

// Implementing Doubly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

// Function to create a new node
struct Node *CreateNode() {
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    return new;
}

// Function to insert a value at the head of the linked list
void Insert(int val) {
    struct Node *NewNode = CreateNode();
    NewNode->value = val;
    NewNode->next = head;
    NewNode->prev = NULL;
    if (head != NULL) {
        head->prev = NewNode;
    }
    head = NewNode;
}

// Function to display the linked list in forward order
void Display() {
    struct Node *temp = head;
    printf("\nForward:\n");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

// Function to display the linked list in reverse order
void ReverseDisplay() {
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    printf("\nBackward:\n");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->prev;
    }
    printf("\n");
}

// Unit test for linked list functions
void test_linked_list() {
    // Test case 1: Insert and Display
    printf("Test case 1: Insert and Display\n");
    Insert(1);
    Insert(2);
    Insert(3);
    Display();
    ReverseDisplay();
    printf("\nExpected Output: \nForward:\n3 2 1 \nBackward:\n1 2 3 \n\n");

    // Test case 2: Insert and Display
    printf("Test case 2: Insert and Display\n");
    Insert(4);
    Insert(5);
    Insert(6);
    Display();
    ReverseDisplay();
    printf("\nExpected Output: \nForward:\n6 5 4 3 2 1 \nBackward:\n1 2 3 4 5 6 \n\n");
}

// Function to check if a number is even or odd
void even_or_odd(int *numbers, int size) {
    int *even = malloc(size * sizeof(int));
    int *odd = malloc(size * sizeof(int));
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            even[even_count++] = numbers[i];
        } else {
            odd[odd_count++] = numbers[i];
        }
    }
    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    free(even);
    free(odd);
}

// Unit test for even_or_odd function
void test_even_or_odd() {
    // Test case 1: All even numbers
    printf("Test case 1: All even numbers\n");
    int numbers1[] = {2, 4, 6, 8, 10};
    even_or_odd(numbers1, 5);
    printf("Expected Output: Even numbers: 2 4 6 8 10 \nOdd numbers: \n\n");

    // Test case 2: All odd numbers
    printf("Test case 2: All odd numbers\n");
    int numbers2[] = {1, 3, 5, 7, 9};
    even_or_odd(numbers2, 5);
    printf("Expected Output: Even numbers: \nOdd numbers: 1 3 5 7 9 \n\n");

    // Test case 3: Mix of even and odd numbers
    printf("Test case 3: Mix of even and odd numbers\n");
    int numbers3[] = {2, 3, 4, 5, 6};
    even_or_odd(numbers3, 5);
    printf("Expected Output: Even numbers: 2 4 6 \nOdd numbers: 3 5 \n\n");
}

// Function to print Fibonacci series
void fibonacci(int n) {
    long a = 0;
    long b = 1;
    for (int i = 0; i < n; i++) {
        printf("%ld\n", a);
        long temp = a;
        a = b;
        b = temp + b;
    }
}

// Unit test for fibonacci function
void test_fibonacci() {
    // Test case 1: n = 0
    printf("Test case 1: n = 0\n");
    fibonacci(0);
    printf("Expected Output: \n\n");

    // Test case 2: n = 5
    printf("Test case 2: n = 5\n");
    fibonacci(5);
    printf("Expected Output: 0\n1\n1\n2\n3\n\n");

    // Test case 3: n = 10
    printf("Test case 3: n = 10\n");
    fibonacci(10);
    printf("Expected Output: 0\n1\n1\n2\n3\n5\n8\n13\n21\n34\n\n");
}

// Function to perform linear search
int linsearch(char **yarr, char *val, int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(yarr[i], val) == 0) {
            return 0;
        }
    }
    return 1;
}

// Unit test for linsearch function
void test_linsearch() {
    // Test case 1: Value found
    printf("Test case 1: Value found\n");
    char *yarr1[] = {"Shluck much", "much Shluck"};
    char *val1 = "Shluck much";
    int size1 = sizeof(yarr1) / sizeof(yarr1[0]);
    int result1 = linsearch(yarr1, val1, size1);
    printf("Expected Output: 0\n");
    printf("Actual Output: %d\n\n", result1);

    // Test case 2: Value not found
    printf("Test case 2: Value not found\n");
    char *yarr2[] = {"Shluck much", "much Shluck"};
    char *val2 = "Shluck Much";
    int size2 = sizeof(yarr2) / sizeof(yarr2[0]);
    int result2 = linsearch(yarr2, val2, size2);
    printf("Expected Output: 1\n");
    printf("Actual Output: %d\n\n", result2);
}

// Function to merge two sub-arrays
void merge(int a[], int low, int mid, int high) {
    int b[20]; // same size of a[]
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= high)
        b[k++] = a[j++];
    for (k = low; k <= high; k++)
        a[k] = b[k];
}

// Merge sort function
void mergesort(int a[], int low, int high) {
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);
    merge(a, low, mid, high);
}

// Unit test for merge sort function
void test_mergesort() {
    // Test case 1: Sorted array
    printf("Test case 1: Sorted array\n");
    int a1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    mergesort(a1, 0, n1 - 1);
    printf("\nSorted numbers are: ");
    for (int k = 0; k < n1; k++)
        printf("%d, ", a1[k]);
    printf("\nExpected Output: 1, 2, 3, 4, 5\n\n");

    // Test case 2: Reverse sorted array
    printf("Test case 2: Reverse sorted array\n");
    int a2[] = {5, 4, 3, 2, 1};
    int n2 = 5;
    mergesort(a2, 0, n2 - 1);
    printf("\nSorted numbers are: ");
    for (int k = 0; k < n2; k++)
        printf("%d, ", a2[k]);
    printf("\nExpected Output: 1, 2, 3, 4, 5\n\n");

    // Test case 3: Random array
    printf("Test case 3: Random array\n");
    int a3[] = {83, 20, 9, 50, 115, 61, 17};
    int n3 = 7;
    mergesort(a3, 0, n3 - 1);
    printf("\nSorted numbers are: ");
    for (int k = 0; k < n3; k++)
        printf("%d, ", a3[k]);
    printf("\nExpected Output: 9, 17, 20, 50, 61, 83, 115\n\n");
}

// Function to swap two elements
void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// Function to partition the array
int partition(int a[], int l, int h) {
    int i = l, j = l, p = h;
    while (i < h) {
        if (a[i] < a[p]) {
            swap(&a[i], &a[j]);
            j++;
        }
        i++;
    }
    swap(&a[p], &a[j]);
    return j;
}

// Quick sort function
void quick_sort(int a[], int l, int h) {
    if (l < h) {
        int p = partition(a, l, h);
        quick_sort(a, l, p - 1);
        quick_sort(a, p + 1, h);
    }
}

// Unit test for quick sort function
void test_quick_sort() {
    // Test case 1: Sorted array
    printf("Test case 1: Sorted array\n");
    int a1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    quick_sort(a1, 0, size1 - 1);
    printf("Sorted array:");
    for (int i = 0; i < size1; i++) {
        printf(" %d", a1[i]);
    }
    printf("\nExpected Output: 1 2 3 4 5\n\n");

    // Test case 2: Reverse sorted array
    printf("Test case 2: Reverse sorted array\n");
    int a2[] = {5, 4, 3, 2, 1};
    int size2 = 5;
    quick_sort(a2, 0, size2 - 1);
    printf("Sorted array:");
    for (int i = 0; i < size2; i++) {
        printf(" %d", a2[i]);
    }
    printf("\nExpected Output: 1 2 3 4 5\n\n");

    // Test case 3: Random array
    printf("Test case 3: Random array\n");
    int a3[] = {83, 20, 9, 50, 115, 61, 17};
    int size3 = 7;
    quick_sort(a3, 0, size3 - 1);
    printf("Sorted array:");
    for (int i = 0; i < size3; i++) {
        printf(" %d", a3[i]);
    }
    printf("\nExpected Output: 9 17 20 50 61 83 115\n\n");
}

// Function to print array before and after sorting
void print_arr(int *ptr, int size) {
    printf("Before sorting: [");
    for (int i = 0; i < size; i++) {
        printf("%d", ptr[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
}

// Function to find the minimum element in an array
int *find_min(int *ptr, int size) {
    int *min = ptr;
    for (int i = 1; i < size; i++) {
        if (ptr[i] < *min)
            min = &ptr[i];
    }
    return min;
}

// Function to perform selection sort
void selection_sort(int *ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int *min = find_min(ptr + i, size - i);
        if (*min < ptr[i])
            swap(min, &ptr[i]);
    }
}

// Function to fill the array with values from command line arguments
void fill(char **av, int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        ptr[i] = atoi(av[i + 2]);
    }
}

// Unit test for selection sort function
void test_selection_sort() {
    // Test case 1: Sorted array
    printf("Test case 1: Sorted array\n");
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    print_arr(arr1, size1);
    selection_sort(arr1, size1);
    printf("After sorting: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", arr1[i]);
        if (i != size1 - 1)
            printf(", ");
    }
    printf("]\n");
    printf("Expected Output: [1, 2, 3, 4, 5]\n\n");

    // Test case 2: Reverse sorted array
    printf("Test case 2: Reverse sorted array\n");
    int arr2[] = {5, 4, 3, 2, 1};
    int size2 = 5;
    print_arr(arr2, size2);
    selection_sort(arr2, size2);
    printf("After sorting: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", arr2[i]);
        if (i != size2 - 1)
            printf(", ");
    }
    printf("]\n");
    printf("Expected Output: [1, 2, 3, 4, 5]\n\n");

    // Test case 3: Random array
    printf("Test case 3: Random array\n");
    int arr3[] = {83, 20, 9, 50, 115, 61, 17};
    int size3 = 7;
    print_arr(arr3, size3);
    selection_sort(arr3, size3);
    printf("After sorting: [");
    for (int i = 0; i < size3; i++) {
        printf("%d", arr3[i]);
        if (i != size3 - 1)
            printf(", ");
    }
    printf("]\n");
    printf("Expected Output: [9, 17, 20, 50, 61, 83, 115]\n\n");
}

int main(int argc, char *argv[]) {
    // Run unit tests
    test_count();
    test_linked_list();
    test_even_or_odd();
    test_fibonacci();
    test_linsearch();
    test_mergesort();
    test_quick_sort();
    test_selection_sort();

    return 0;
}