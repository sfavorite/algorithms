#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void *pdata;    // Generic pointer to data

    struct node * next; // next node
    struct node * prev; // previous node
} node_t;


int main() {

    return EXIT_SUCCESS;

}
