#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
    struct node * prev;
} node_t;

// Initialize the Double Linked List
void Initialize(struct node ** head, struct node ** tail) {

    * head = malloc(sizeof(*head));
    * tail = malloc(sizeof(*tail));

    (* head)->next = (* tail);
    (* head)->prev = NULL;

    (* tail)->next = NULL;
    (* tail)->prev = NULL;

}

void ListNewNode() {

}

void InsertAtHead() {

}

void InsertAtTail(struct node * tail, int new_value) {

}

void ListPrint() {

}

void ReversePrint() {

}

void InsertBefore() {

}

void InsertAfter() {

}

void ListDeleteNode() {

}

void ListDestroy() {
}


int main() {

    node_t * head = NULL;
    node_t * tail = NULL;

    Initialize(&head, &tail);

    head->value = 1;

    InsertAtTail(tail, 2);

    return EXIT_SUCCESS;
}
