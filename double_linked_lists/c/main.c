#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
    struct node * prev;
} node_t;

// Initialize the Double Linked List
void Initialize(struct node ** head, struct node ** tail) {

    * head = malloc(sizeof(node_t));

    (* head)->next = (* tail);
    (* head)->prev = NULL;

    (* tail) = NULL;

}

void ListNewNode() {

}

void InsertAtHead() {

}

void InsertAtTail(struct node ** tail, struct node ** head, int new_value) {
    node_t * new_node = NULL;
     node_t * temp = NULL;

     // Is the list initialized?
     if ((* head) == NULL) {
         Initialize(head, tail);
         (* head)->value = new_value;
     } // Add to the tail if it is NULL
     else if ((* tail) == NULL) {
         // Allocate memory for the tail
         (* tail) = malloc(sizeof(node_t));

         // Point tail prev to head
         (* tail)->prev = * head;

         // Point tail next to NULL
         (* tail)->next = NULL;

         // Point head next to tail
         (* head)->next = (* tail);

         // Assign new data
         (* tail)->value = new_value;

     // Create a new node and add to the end.
     } else {

         // Set the current tail as temp
         temp = (* tail);
         // Allocate memory for the new node
         new_node = malloc(sizeof(node_t));
         // Set the 'old' tail next to the new node
         temp->next = new_node;
         new_node->next = NULL;
         new_node->prev = temp;
         (* tail) = new_node;
         (* tail)->value = new_value;
     }
}


void ListPrint(node_t * current) {
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}


void ReversePrint(node_t * current) {
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}

// Before given node
void InsertBefore() {

}

// After given node
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

    InsertAtTail(&tail, &head, 2);

    ListPrint(head);
    printf("Exit");

    return EXIT_SUCCESS;
}
