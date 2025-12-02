#include <stdio.h>

int main() {
    int i, sum = 0;

    // Loop from 1 to 9
    for (i = 1; i <= 9; i++) {
        sum += i;  // Add each number to sum
    }

    printf("The sum of the first 9 natural numbers is: %d\n", sum);

    return 0;
}
