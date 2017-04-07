#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

node_t * head = NULL;

void print_list(node_t * head) {
        node_t * current = head;

        while(current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
        printf("\n");
}

void push_end(node_t * head, int val) {
    node_t * current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    // Now add
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void push_head(node_t ** head, int val) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    if (new_node != NULL) {
        new_node->val = val;
        new_node->next = *head;

        * head = new_node;
    }
}

int pop_first(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return (*head)->val;
}

int pop_last(node_t * head) {
    int retval = -1;

    // Only one node? If so remove and free memory
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    // Get the last node in the list
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Remove current->next (the last node)
    retval = current->next->val;
    free(current->next);
    current->next = NULL;

    return retval;
}

int remove_by_index(node_t ** head, int n) {
    int retval = -1;
    int i;
    node_t * current = * head;
    node_t * temp_node = NULL;

    if (n == 0) {
        return pop_first(head);
    }

    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}

int remove_by_value(node_t ** head, int value) {
    node_t * current = * head;
    node_t * temp_node = NULL;

    while (current->next->val != value) {
        current = current->next;
        if (current->next == NULL) {
            printf("Couldn't find value\n");
            return -1;
        }
    }

    temp_node = current->next->next;
    current->next = temp_node;
    free(temp_node);
    return EXIT_SUCCESS;
}


int main() {
    int i;
    head = malloc(sizeof(node_t));

    if (head == NULL) {
        return EXIT_FAILURE;
    }

    head->val = 1;
    head->next = NULL;
    printf("Push end 2\n");
    push_end(head, 2);
    printf("Pus end 3\n");
    push_end(head, 3);
    push_head(&head, 4);
    print_list(head);

    printf("Pop first item (head)\n");
    pop_first(&head);
    print_list(head);

    printf("Pop last item\n");
    pop_last(head);
    print_list(head);

    printf("Create bigger list\n");
    for (i = 10; i < 16; ++i) {
        push_end(head, i);
    }
    print_list(head);

    printf("Remove third item\n");
    remove_by_index(&head, 3);
    print_list(head);

    printf("Remove value 13\n");
    remove_by_value(&head, 13);
    print_list(head);
    return EXIT_SUCCESS;
}
