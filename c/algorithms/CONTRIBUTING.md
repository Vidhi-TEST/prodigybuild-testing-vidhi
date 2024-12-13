#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count(int num) {
    printf("[");
    if (num > 20) {
        for (int i = 0; i < num; i++) {
            printf("\n%d, \n", i);
        }
        printf("]");
    } else {
        for (int i = 0; i < num; i++) {
            printf("%d", i);
        }
        printf("]");
    }
}

int main() {
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    count(num);
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

struct Node *CreateNode() {
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    return new;
}

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

void Display() {
    struct Node *temp = head;
    printf("\nForward:\n");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

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

void main() {
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &val);
        Insert(val);
    }
    Display();
    ReverseDisplay();
}

#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int size;
    printf("Enter the number of numbers: ");
    scanf("%d", &size);
    int *numbers = malloc(size * sizeof(int));
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    even_or_odd(numbers, size);
    free(numbers);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}

#include <stdio.h>
#include <string.h>

int linsearch(char **yarr, char *val, int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(yarr[i], val) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char *yarr[] = {"Shluck much", "much Shluck"};
    char *val = "Shluck Much";
    int size = sizeof(yarr) / sizeof(yarr[0]);
    linsearch(yarr, val, size);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int a[], int low, int mid, int high) {
    int b[20];
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

void mergesort(int a[], int low, int high) {
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main() {
    int a[7] = {83, 20, 9, 50, 115, 61, 17};
    int n = 7;
    mergesort(a, 0, n - 1);
    printf("\n Sorted numbers are: ");
    for (int k = 0; k < 7; k++)
        printf("%d, ", a[k]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int partition(int *a, int l, int h);

void quick_sort(int *a, int l, int h);

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);
    int *arr = malloc(size * sizeof(int));
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, size - 1);
    printf("Sorted array:");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

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

void quick_sort(int a[], int l, int h) {
    int p;
    if (l < h) {
        p = partition(a, l, h);
        quick_sort(a, l, p - 1);
        quick_sort(a, p + 1, h);
    }
    return;
}

#include <stdio.h>
#include <stdlib.h>

void print_arr(int *ptr, int size) {
    printf("Before sorting: [");
    for (int i = 0; i < size; i++) {
        printf("%d", ptr[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *find_min(int *ptr, int size) {
    int *min = ptr;
    for (int i = 1; i < size; i++) {
        if (ptr[i] < *min)
            min = &ptr[i];
    }
    return min;
}

void selection_sort(int *ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int *min = find_min(ptr + i, size - i);
        if (*min < ptr[i])
            swap(min, &ptr[i]);
    }
}

void fill(char **av, int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        ptr[i] = atoi(av[i + 2]);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        puts("Usage: ./your-executable-name [array size] [array]");
        puts("Example: ./your-executable-name 3 2 1 0");
        return EXIT_FAILURE;
    }
    int size = atoi(argv[1]);
    if (!size) {
        puts("Error: size of array can't be 0");
        return EXIT_FAILURE;
    }
    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr)
        return EXIT_FAILURE;
    fill(argv, arr, size);
    print_arr(arr, size);
    selection_sort(arr, size);
    printf("After sorting: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
    free(arr);
    return EXIT_SUCCESS;
}