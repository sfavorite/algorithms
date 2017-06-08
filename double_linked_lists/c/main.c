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

void InsertAtHead(struct node ** head, struct node ** tail, int new_value) {
	node_t * new_node = NULL;

	// Is the list initialized?
	if ((*head) == NULL) {
		Initialize(head, tail);
		(*head)->value = new_value;
	} // Add to the tail if it is NULL
	else {
		// Allocate memory for the new head
		new_node = malloc(sizeof(node_t));
		new_node->prev = NULL;
		new_node->next = (*head);

		new_node->value = new_value;

		(*head)->prev = new_node;
		(*head) = new_node;
	}

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
        current = current->prev;
    }
}

// Find the node in the i'th position in the list
node_t * NodeInPosition(node_t * current, int position) {
    int i = 1;

    while (current && i < position) {
        ++i;
        current = current->next;
    }

    return current;
}

// Before given node
void InsertBefore() {

}

// After given node
void InsertAfter() {

}

// Delete the node at position
int DeleteNode(node_t ** current, int position) {
	node_t * temp;

	if ((*current) == NULL) {
		return 0;
	}
	// Get the node we want to delete
	node_t * node_to_delete = NodeInPosition((* current), position);

	printf("Value %d\n", node_to_delete->value);

	// Is this the head?
	if (node_to_delete->prev == NULL) {
        node_to_delete = node_to_delete->next;
        node_to_delete->prev = NULL;

	} // Is this the tail?
	else if (node_to_delete->next == NULL) {
		node_to_delete->prev->next = NULL;
	} // Delete a 'middle' node
	else {
		temp = node_to_delete;

		// Point previous node to node_to_delete's next node
		node_to_delete->prev->next = temp->next;
		// Point next node to node_to_delet's prev node
		node_to_delete->next->prev = temp->prev;
	}

	// Free the memory for deleted node
	free(node_to_delete);
	return 0;
}

void ListDestroy(node_t ** head) {
    node_t * temp = NULL;


    while(* head) {
        printf("Delete: %d\n", (* head)->value);
        temp = * head;
        (* head) = (* head)->next;
        free(temp);
    }
    (* head) = NULL;
}


int main() {

 	node_t * head = NULL;
	node_t * tail = NULL;
	//node_t * temp = malloc(sizeof(node_t));
	node_t * temp = NULL;

	Initialize(&head, &tail);

	head->value = 1;

	InsertAtTail(&tail, &head, 2);
	printf("%p\n", &tail);
	if (tail->next != NULL) {
		printf("%d\n", tail->value);
	}
	ListPrint(head);


	InsertAtTail(&tail, &head, 3);
    InsertAtHead(&head, &tail, 0);
	ReversePrint(tail);
	ListPrint(head);

	int position = 2;
	temp = NodeInPosition(head, position);

	if (temp) {
		printf("Value is %d\n", temp->value);
	}
	else {
		printf("List doesn't have position %i\n", position);
	}
	// Set temp to NULL and free the memory of our temp pointer.
	temp = NULL;
	free(temp);

	ListDestroy(&head);

    return EXIT_SUCCESS;
}
