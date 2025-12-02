#include <stdio.h>
#include <string.h>

// custom string length function
int string_len(const char* arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

int main(void) {
    char arr[100];

    printf("Enter a string: ");
    scanf("%99s", arr);  // safer input

    printf("Length: %d\n", string_len(arr));
    // or simply: printf("Length: %zu\n", strlen(arr));

    return 0;
}