// Unit tests for InsertAtBegin function
void test_InsertAtBegin() {
    head = NULL;
    InsertAtBegin(5);
    assert(head->data == 5);
    assert(head->next == NULL);

    InsertAtBegin(10);
    assert(head->data == 10);
    assert(head->next->data == 5);
    assert(head->next->next == NULL);
}

// Unit tests for InsertAtnthNode function
void test_InsertAtnthNode() {
    head = NULL;
    InsertAtnthNode(1, 5);
    assert(head->data == 5);
    assert(head->next == NULL);

    InsertAtnthNode(2, 10);
    assert(head->data == 5);
    assert(head->next->data == 10);
    assert(head->next->next == NULL);

    InsertAtnthNode(2, 15);
    assert(head->data == 5);
    assert(head->next->data == 15);
    assert(head->next->next->data == 10);
    assert(head->next->next->next == NULL);
}

// Unit tests for InsertAtEnd function
void test_InsertAtEnd() {
    head = NULL;
    InsertAtEnd(5);
    assert(head->data == 5);
    assert(head->next == NULL);

    InsertAtEnd(10);
    assert(head->data == 5);
    assert(head->next->data == 10);
    assert(head->next->next == NULL);

    InsertAtEnd(15);
    assert(head->data == 5);
    assert(head->next->data == 10);
    assert(head->next->next->data == 15);
    assert(head->next->next->next == NULL);
}

// Unit tests for DeleteAtBegin function
void test_DeleteAtBegin() {
    head = NULL;
    DeleteAtBegin();
    assert(head == NULL);

    InsertAtBegin(5);
    InsertAtBegin(10);
    DeleteAtBegin();
    assert(head->data == 5);
    assert(head->next == NULL);

    DeleteAtBegin();
    assert(head == NULL);
}

// Unit tests for DeleteAtEnd function
void test_DeleteAtEnd() {
    head = NULL;
    DeleteAtEnd();
    assert(head == NULL);

    InsertAtBegin(5);
    InsertAtBegin(10);
    DeleteAtEnd();
    assert(head->data == 10);
    assert(head->next == NULL);

    DeleteAtEnd();
    assert(head == NULL);
}

// Unit tests for DeletenthNode function
void test_DeletenthNode() {
    head = NULL;
    DeletenthNode(1);
    assert(head == NULL);

    InsertAtBegin(5);
    InsertAtBegin(10);
    InsertAtBegin(15);
    DeletenthNode(2);
    assert(head->data == 15);
    assert(head->next->data == 5);
    assert(head->next->next == NULL);

    DeletenthNode(1);
    assert(head->data == 5);
    assert(head->next == NULL);
}

// Unit tests for Display function
void test_Display() {
    head = NULL;
    Display(); // Should print "No elements to display"

    InsertAtBegin(5);
    InsertAtBegin(10);
    InsertAtBegin(15);
    Display(); // Should print "Current List: 15 10 5"
}

int main() {
    test_InsertAtBegin();
    test_InsertAtnthNode();
    test_InsertAtEnd();
    test_DeleteAtBegin();
    test_DeleteAtEnd();
    test_DeletenthNode();
    test_Display();

    return 0;
}