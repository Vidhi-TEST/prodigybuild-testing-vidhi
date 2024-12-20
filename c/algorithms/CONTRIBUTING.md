#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Binary Search Tree Node
struct BST {
    int data;
    struct BST* left;
    struct BST* right;
};

// Create a new node
struct BST* CreateNode(int value) {
    struct BST* newNode = (struct BST*)malloc(sizeof(struct BST));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a value into the BST
void Insert(struct BST** RootPtr, int value) {
    struct BST* temp = *RootPtr;
    if (temp == NULL) {
        *RootPtr = CreateNode(value);
    } else if (value <= temp->data) {
        Insert(&(temp->left), value);
    } else {
        Insert(&(temp->right), value);
    }
}

// Search for an item in the BST
int Search(struct BST* RootPtr, int item) {
    if (RootPtr == NULL) {
        return 0;
    } else if (item == RootPtr->data) {
        return 1;
    } else if (item < RootPtr->data) {
        return Search(RootPtr->left, item);
    } else {
        return Search(RootPtr->right, item);
    }
}

// Unit tests
void testBST() {
    struct BST* RootPtr = NULL;
    int item, cont, key;
    do {
        printf("Enter item: ");
        scanf("%d", &item);
        Insert(&RootPtr, item);
        printf("1 to keep inserting/ 0 to Exit: ");
        scanf("%d", &cont);
    } while (cont == 1);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    if (Search(RootPtr, key) == 0) {
        printf("\nFound\n");
    } else {
        printf("\nNot Found\n");
    }
}

int main() {
    testBST();
    return 0;
}

// Implementing Doubly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

// Create a new node
struct Node* CreateNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    return newNode;
}

// Display the list in forward order
void Display() {
    struct Node* temp = head;
    printf("\nForward:\n");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

// Display the list in reverse order
void ReverseDisplay() {
    struct Node* temp = head;
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

// Unit tests
void testLinkedList() {
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &val);
        CreateNode(val);
    }
    Display();
    ReverseDisplay();
}

int main() {
    testLinkedList();
    return 0;
}

// A menu-driven C program which lets the user Insert, Delete, and Display elements in a list at different positions and situations.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

// Create a new node
struct node* CreateNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert a value at the beginning of the list
void InsertAtBegin(int value) {
    struct node* NewNode = CreateNode(value);
    if (head == NULL) {
        head = NewNode;
    } else {
        printf("\n\t**Element already exists at this position**\n");
    }
}

// Insert a value at the nth position in the list
void InsertAtnthNode(int pos, int value) {
    struct node* temp = head;
    if (pos == 1) {
        printf("\n\t**Use Insert at beginning**\n");
    } else {
        struct node* NewNode = CreateNode(value);
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;
    }
}

// Insert a value at the end of the list
void InsertAtEnd(int value) {
    if (head == NULL) {
        printf("\n\t**Use Insert at beginning**\n");
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        struct node* NewNode = CreateNode(value);
        NewNode->next = temp->next;
        temp->next = NewNode;
    }
}

// Delete the first element in the list
void DeleteAtBegin() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
    } else {
        head = head->next;
        printf("\n\t**Element deleted successfully**\n");
    }
}

// Delete the last element in the list
void DeleteAtEnd() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
    } else if (head->next == NULL) {
        printf("\n\t**Use Delete at beginning**\n");
    } else {
        struct node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        free(temp->next);
        printf("\n\t**Element deleted successfully**\n");
    }
}

// Delete the element at the nth position in the list
void DeletenthNode(int pos) {
    struct node* temp = head;
    if (pos == 1) {
        printf("\n\t**Use Delete at beginning**\n");
    } else {
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        struct node* temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
        printf("\n\t**Element deleted successfully**\n");
    }
}

// Display the list
void Display() {
    if (head == NULL) {
        printf("\n\t**No elements to display**\n\n");
    } else {
        struct node* temp = head;
        printf("\nCurrent List:\n");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

// Main function
int main() {
    head = NULL;
    int ch;
    while (1) {
        printf("\n\t\t**MENU**\n");
        printf("\t1. Insert at beginning\n");
        printf("\t2. Insert at nth position\n");
        printf("\t3. Insert at end\n");
        printf("\t4. Delete at beginning\n");
        printf("\t5. Delete at end\n");
        printf("\t6. Delete nth node\n");
        printf("\t7. Display\n");
        printf("\t8. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter value to be inserted: ");
                int v1;
                scanf("%d", &v1);
                InsertAtBegin(v1);
                break;
            case 2:
                printf("Enter position to insert value: ");
                int v2, pos1;
                scanf("%d", &pos1);
                printf("Enter value to be inserted: ");
                scanf("%d", &v2);
                InsertAtnthNode(pos1, v2);
                break;
            case 3:
                printf("Enter value to insert at end: ");
                int v3;
                scanf("%d", &v3);
                InsertAtEnd(v3);
                break;
            case 4:
                DeleteAtBegin();
                break;
            case 5:
                DeleteAtEnd();
                break;
            case 6:
                printf("Enter position to delete element: ");
                int pos2;
                scanf("%d", &pos2);
                DeletenthNode(pos2);
                break;
            case 7:
                Display();
                break;
            case 8:
                printf("\n\t**THANK YOU!**\n");
                exit(0);
            default:
                printf("\n\t**Choose a valid option**\n");
        }
    }
    return 0;
}

// Implementation of Binary Search
#include <stdio.h>

int binsearch(int yarr[], int size, int element) {
    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (yarr[mid] == element) {
            return mid;
        } else if (yarr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int size = sizeof(yarr) / sizeof(yarr[0]);
    int element = atoi(argv[1]);
    int result = binsearch(yarr, size, element);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

// Bubble Sort
#include <stdio.h>

void bubble_sort(int* array, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int len = sizeof(yarr) / sizeof(yarr[0]);
    bubble_sort(yarr, 10);
    printf("[");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", yarr[i]);
    }
    printf("\b\b]\n");
    return 0;
}

// Count numbers
#include <stdio.h>

int count(int num) {
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

int main() {
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    count(num);
}

// Even or Odd
#include <stdio.h>
#include <stdlib.h>

void even_or_odd(int* numbers, int size) {
    int* even = malloc(size * sizeof(int));
    int* odd = malloc(size * sizeof(int));
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
    int* numbers = malloc(size * sizeof(int));
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    even_or_odd(numbers, size);
    free(numbers);
    return 0;
}

// Factorial
#include <stdio.h>
#include <stdlib.h>

int fak(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n < 0) {
        return 1;
        exit(1);
    }
    return n * fak(n - 1);
}

int main() {
    printf("fak(1): %d\n", fak(1));
    printf("fak(2): %d\n", fak(2));
    printf("fak(3): %d\n", fak(3));
    printf("fak(4): %d\n", fak(4));
    printf("fak(5): %d\n", fak(5));
    printf("fak(-1): %d\n", fak(-1));
    return 1;
}

// Fibonacci
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

// Insertion Sort
#include <stdio.h>

void insertion_sort(int* array, int len) {
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

// Keylogger
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keylog() {
    FILE* fPtr;
    fPtr = fopen("keylogger.txt", "w+");
    fopen("keylogger.txt", "w");
    const char* a = getchar();
    if (a != NULL) {
        fprintf(fPtr, a);
    }
    time_t now = time(NULL);
    struct tm* tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;
    if (hour == 24) {
        fclose(fPtr);
    }
}

int main() {
    keylog();
}

// Linear Search
#include <stdio.h>
#include <string.h>

int linsearch(char** yarr, char* val, int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(yarr[i], val) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char* yarr[] = {"Shluck much", "much Shluck"};
    char* val = "Shluck Much";
    int size = sizeof(yarr) / sizeof(yarr[0]);
    linsearch(yarr, val, size);
}

// Merge Sort
#include <stdio.h>
#include <stdlib.h>

// Merge two sub-arrays
void merge(int a[], int low, int mid, int high) {
    int b[20];  // same size of a[]
    int i, j, k;
    i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid) b[k++] = a[i++];
    while (j <= high) b[k++] = a[j++];
    for (k = low; k <= high; k++) a[k] = b[k];
}

// Merge sort function
void mergesort(int a[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);
    merge(a, low, mid, high);
}

// Main function
int main() {
    int a[7] = {83, 20, 9, 50, 115, 61, 17};
    int n = 7;
    mergesort(a, 0, n - 1);
    printf("\n Sorted numbers are: ");
    for (int k = 0; k < 7; k++) printf("%d, ", a[k]);
    return 0;
}

// Pyramid
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

// Quick Sort
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
int partition(int* a, int l, int h);
void quick_sort(int* a, int l, int h);

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);
    int* arr = malloc(size * sizeof(int));
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

void swap(int* a, int* b) {
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

// Selection Sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int* ptr, int size) {
    printf("Before sorting: [");
    for (int i = 0; i < size; i++) {
        printf("%d", ptr[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int* find_min(int* ptr, int size) {
    int* min = ptr;
    for (int i = 1; i < size; i++) {
        if (ptr[i] < *min) min = &ptr[i];
    }
    return min;
}

void selection_sort(int* ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int* min = find_min(ptr + i, size - i);
        if (*min < ptr[i]) swap(min, &ptr[i]);
    }
}

void fill(char** av, int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        ptr[i] = atoi(av[i + 2]);
    }
}

int main(int argc, char* argv[]) {
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
    int* arr = (int*)malloc(size * sizeof(int));
    if (!arr) return EXIT_FAILURE;
    fill(argv, arr, size);
    print_arr(arr, size);
    selection_sort(arr, size);
    printf("After sorting: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
    free(arr);
    return EXIT_SUCCESS;
}

// Tic-Tac-Toe
#include <stdio.h>
#include <stdlib.h>

// Function to display the tic-tac-toe board
void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// Function to check if the game has been won
int checkWin(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return 1;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }
    return 0;
}

// Function to check if the game is a draw
int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

// Function to play the tic-tac-toe game
void playGame() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
    int row, col;
    int gameOver = 0;
    while (!gameOver) {
        displayBoard(board);
        printf("Player %c's turn\n", currentPlayer);
        printf("Enter row(0-2): ");
        scanf("%d", &row);
        printf("Enter column(0-2): ");
        scanf("%d", &col);
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }
        board[row][col] = currentPlayer;
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            gameOver = 1;
        } else if (checkDraw(board)) {
            displayBoard(board);
            printf("It's a draw!\n");
            gameOver = 1;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    playGame();
    return 0;
}

// Todo List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

// Create a new node
struct Node* CreateNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return newNode;
}

// View the todo list
void View() {
    struct Node* temp = head;
    printf("Todo List:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main function
int main() {
    head = NULL;
    int choice, value;
    while (1) {
        printf("\n1. Add task\n");
        printf("2. View tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter task: ");
                scanf("%d", &value);
                CreateNode(value);
                break;
            case 2:
                View();
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}