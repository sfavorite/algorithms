#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
    struct node * prev;
} node_t;

void initialize(struct node ** head, struct node ** tail) {

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

void InsertAtTail() {

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

    initialize(&head, &tail);



    return EXIT_SUCCESS;
}
