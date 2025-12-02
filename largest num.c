#include <stdio.h>

int largest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    printf("Largest = %d\n", largest(12, 9));
    return 0;
}
