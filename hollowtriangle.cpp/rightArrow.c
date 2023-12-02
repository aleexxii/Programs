#include <stdio.h>

int main() {
    int i, j;
    int rows = 11; // You can change this value to adjust the number of rows

    for (i = 1; i <= rows; i++) {
        if (i <= 6) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
        } else {
            for (j = 1; j <= (rows - i + 1); j++) {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}