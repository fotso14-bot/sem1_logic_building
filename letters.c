#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {           // Loop for rows
        for (j = 1; j <= i; j++) {       // Loop for letters
            printf("%c ", 'A' + j - 1);  // Print letters starting from A
        }
        printf("\n");                    // Move to next line
    }

    return 0;
}
