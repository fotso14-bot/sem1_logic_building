#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);   // User input for number of rows

    for (i = 1; i <= n; i++) {        // Loop for each row
        for (j = 1; j <= i; j++) {    // Print '*' up to the current row number
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
