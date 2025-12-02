#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 3; i++) {             // Loop for rows
        for (j = 0; j <= i; j++) {        // Loop for columns
            printf("%c ", 'A' + i);       // Print same letter in each row
        }
        printf("\n");                     // Move to next line
    }

    return 0;
}
