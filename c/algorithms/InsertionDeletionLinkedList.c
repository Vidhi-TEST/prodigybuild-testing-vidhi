#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *CreateNode(int value) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void InsertAtBegin(int value) {
    struct node *newNode = CreateNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void InsertAtnthNode(int pos, int value) {
    assert(pos > 0);
    struct node *temp = head;
    if (pos == 1) {
        InsertAtBegin(value);
    } else {
        struct node *newNode = CreateNode(value);
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                printf("\n\t**Invalid position**\n");
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("\n\t**Invalid position**\n");
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void InsertAtEnd(int value) {
    struct node *newNode = CreateNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void DeleteAtBegin() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
    } else {
        struct node *temp = head;
        head = head->next;
        free(temp);
        printf("\n\t**Element deleted successfully**\n");
    }
}

void DeleteAtEnd() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
    } else if (head->next == NULL) {
        DeleteAtBegin();
    } else {
        struct node *temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        printf("\n\t**Element deleted successfully**\n");
    }
}

void DeletenthNode(int pos) {
    assert(pos > 0);
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
    } else if (pos == 1) {
        DeleteAtBegin();
    } else {
        struct node *temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL || temp->next == NULL) {
                printf("\n\t**Invalid position**\n");
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            printf("\n\t**Invalid position**\n");
            return;
        }
        struct node *temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
        printf("\n\t**Element deleted successfully**\n");
    }
}

void Display() {
    if (head == NULL) {
        printf("\n\t**No elements to display**\n\n");
    } else {
        struct node *temp = head;
        printf("\nCurrent List:\n");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void test() {
    InsertAtBegin(1);
    InsertAtBegin(2);
    InsertAtBegin(3);
    InsertAtEnd(4);
    InsertAtnthNode(2, 5);
    InsertAtnthNode(6, 6);
    Display();
    DeleteAtBegin();
    DeleteAtEnd();
    DeletenthNode(2);
    Display();
}

int main() {
    test();
    return 0;
}