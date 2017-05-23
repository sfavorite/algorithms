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

    (* head)->next = (* tail);
    (* head)->prev = NULL;

    (* tail) = NULL;

}

void ListNewNode() {

}

void InsertAtHead() {

}

void InsertAtTail() {

}

void ListPrint(node_t * current) {
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
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

    ListPrint(head);

    return EXIT_SUCCESS;
}
