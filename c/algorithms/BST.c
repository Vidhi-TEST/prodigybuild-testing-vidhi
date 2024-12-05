#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_Insert() {
    struct BST* RootPtr = NULL;
    Insert(&RootPtr, 5);
    Insert(&RootPtr, 3);
    Insert(&RootPtr, 7);
    Insert(&RootPtr, 2);
    Insert(&RootPtr, 4);
    Insert(&RootPtr, 6);
    Insert(&RootPtr, 8);
    Insert(&RootPtr, 1);
    Insert(&RootPtr, 9);
    Insert(&RootPtr, 0);
    // TODO: Add assertions to check if the tree is constructed correctly
}

void test_Search() {
    struct BST* RootPtr = NULL;
    Insert(&RootPtr, 5);
    Insert(&RootPtr, 3);
    Insert(&RootPtr, 7);
    Insert(&RootPtr, 2);
    Insert(&RootPtr, 4);
    Insert(&RootPtr, 6);
    Insert(&RootPtr, 8);
    Insert(&RootPtr, 1);
    Insert(&RootPtr, 9);
    Insert(&RootPtr, 0);

    // Test cases for Search
    int result = Search(RootPtr, 5);
    // TODO: Add assertions to check if the result is correct

    result = Search(RootPtr, 10);
    // TODO: Add assertions to check if the result is correct
}

int main() {
    test_Insert();
    test_Search();

    return 0;
}