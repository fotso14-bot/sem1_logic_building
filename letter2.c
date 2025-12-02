#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';  // Start with letter A

    for (i = 1; i <= 3; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {     // Loop for letters in each row
            printf("%c ", ch);
            ch++;                      // Move to next letter
        }
        printf("\n");                  // Next line
    }

    return 0;
}
