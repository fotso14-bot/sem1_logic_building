#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {        // Loop for each row
        for (j = 1; j <= i; j++) {    // Loop to print '*' in each row
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
