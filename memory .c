#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    // allocate and initialize 10 floats to 0
    float* numbers = calloc(10, sizeof(float));
    if (!numbers) {
        fprintf(stderr, "Memory allocation failed for numbers\n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%g ", numbers[i]);
    }

    // allocate space for name
    char* name = malloc(100 * sizeof(char));
    if (!name) {
        fprintf(stderr, "Memory allocation failed for name\n");
        free(numbers);
        return 1;
    }

    printf("\nEnter your name: ");
    scanf("%99s", name);  // safer: limit input to 99 chars

    // no need to realloc here, but if you want:
    char* temp = realloc(name, strlen(name) + 1);
    if (temp) {
        name = temp;  // only update if realloc succeeded
    }

    printf("Hello, %s\n", name);

    free(numbers);
    free(name);

    return 0;
}