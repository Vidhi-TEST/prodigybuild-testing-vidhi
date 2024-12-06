// Unit tests for BST.c

#include <stdio.h>
#include <assert.h>

// Function to test the Insert function
void testInsert() {
    struct BST* RootPtr = NULL;

    // Inserting elements into the BST
    Insert(&RootPtr, 5);
    Insert(&RootPtr, 3);
    Insert(&RootPtr, 7);
    Insert(&RootPtr, 2);
    Insert(&RootPtr, 4);
    Insert(&RootPtr, 6);
    Insert(&RootPtr, 8);

    // Testing if the elements are inserted correctly
    assert(Search(RootPtr, 5) == 1);
    assert(Search(RootPtr, 3) == 1);
    assert(Search(RootPtr, 7) == 1);
    assert(Search(RootPtr, 2) == 1);
    assert(Search(RootPtr, 4) == 1);
    assert(Search(RootPtr, 6) == 1);
    assert(Search(RootPtr, 8) == 1);
    assert(Search(RootPtr, 1) == 0);
    assert(Search(RootPtr, 9) == 0);
}

// Function to test the Search function
void testSearch() {
    struct BST* RootPtr = NULL;

    // Inserting elements into the BST
    Insert(&RootPtr, 5);
    Insert(&RootPtr, 3);
    Insert(&RootPtr, 7);
    Insert(&RootPtr, 2);
    Insert(&RootPtr, 4);
    Insert(&RootPtr, 6);
    Insert(&RootPtr, 8);

    // Testing if the search function returns the correct result
    assert(Search(RootPtr, 5) == 1);
    assert(Search(RootPtr, 3) == 1);
    assert(Search(RootPtr, 7) == 1);
    assert(Search(RootPtr, 2) == 1);
    assert(Search(RootPtr, 4) == 1);
    assert(Search(RootPtr, 6) == 1);
    assert(Search(RootPtr, 8) == 1);
    assert(Search(RootPtr, 1) == 0);
    assert(Search(RootPtr, 9) == 0);
}

int main() {
    testInsert();
    testSearch();

    printf("All tests passed!\n");

    return 0;
}