// gcc  -o llist main.c -lsodium

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sodium.h> // Used for random shuffle

typedef struct node {
    int value;
    struct node * next;
} node_t;

node_t * head = NULL;


void print_list(node_t * head) {
        node_t * current = head;

        while(current != NULL) {
            printf("%d\n", current->value);
            current = current->next;
        }
        printf("\n");
}

void push_end(node_t * head, int value) {
    node_t * current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    // Now add
    current->next = malloc(sizeof(node_t));
    current->next->value = value;
    current->next->next = NULL;
}

void push_head(node_t ** head, int value) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    if (new_node != NULL) {
        new_node->value = value;
        new_node->next = *head;

        * head = new_node;
    }
}

int pop_first(node_t ** head) {
    int retvalue = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retvalue = (*head)->value;
    free(*head);
    *head = next_node;

    return (*head)->value;
}

int pop_last(node_t * head) {
    int retvalue = -1;

    // Only one node? If so remove and free memory
    if (head->next == NULL) {
        retvalue = head->value;
        free(head);
        return retvalue;
    }

    // Get the last node in the list
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Remove current->next (the last node)
    retvalue = current->next->value;
    free(current->next);
    current->next = NULL;

    return retvalue;
}

int remove_by_index(node_t ** head, int n) {
    int retvalue = -1;
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
    retvalue = temp_node->value;
    current->next = temp_node->next;
    free(temp_node);

    return retvalue;
}

int remove_by_value(node_t ** head, int valueue) {
    node_t * current = * head;
    node_t * temp_node = NULL;

    while (current->next->value != valueue) {
        current = current->next;
        if (current->next == NULL) {
            printf("Couldn't find valueue\n");
            return -1;
        }
    }

    temp_node = current->next->next;
    current->next = temp_node;
    free(temp_node);
    return EXIT_SUCCESS;
}

void swap(node_t * head, int first_index, int second_index) {
    node_t * first_node =  head;
    node_t * second_node =  head;
    int temp_data;

    // Find the node before first_index
    // Change it's next pointer to be second_index

    for (int i = 0; i < first_index; i++) {
        first_node = first_node->next;
    }

    for (int i = 0; i < second_index; i++) {
        second_node = second_node->next;
    }

    temp_data = first_node->value;
    first_node->value = second_node->value;
    second_node->value = temp_data;
}

void insertion_sort(node_t ** head) {
    node_t * current = * head;
    int node_count = 0;
    int new_number;
}

void random_shuffle(node_t *head) {
    node_t * current = head;
    int node_count = 1;
    int swap_with;

    while (current->next != NULL) {
        current = current->next;
        node_count += 1;
    }

    // Swap each node with a random one
    for (int i = 0; i < node_count; i++) {
        // Get a random number (between 0 and node_count-1) and
        // swap the node at that index with node i (0, 1, 2, 3...)
        swap_with = randombytes_uniform(node_count);
        swap(head, i, swap_with);

    }
}


int main() {
    int i;
    head = malloc(sizeof(node_t));

    if (head == NULL) {
        return EXIT_FAILURE;
    }

    head->value = 1;
    head->next = NULL;

    for (i = 2; i <= 20; i++) {
        push_end(head, i);
    }
    print_list(head);

    char myString[32];
    // Array with 32 random bytes
    randombytes_buf(myString, 32);
    //printf("String: %s\n", myString);

    // Random number between 0 and 9
    int new_number;
    new_number = randombytes_uniform(10);

    random_shuffle(head);
    print_list(head);
    return EXIT_SUCCESS;
}
