// To compile using gcc or clang
// gcc -o bubble main.c
// clang -o bubble main.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_data = 10;
    int data[10] = { 3, 1, -2, 4, 5, 11, 32, 9, -1, 6 };
    int temp;

    // Sort the data array
    for (int i = 0; i < num_data - 1; i++) {
        for (int j = 0; j < num_data - 1; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", data[i]);
    }

    return EXIT_SUCCESS;
}
