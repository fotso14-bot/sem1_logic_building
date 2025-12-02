#include <stdio.h>

int main() {

    int number;

    printf("\n\n Enter a number : ");
    scanf("%d", &number);

    if(number > 0) {
        printf("\n\n Entered number %d is a positive number ",number);

    }
    else {
        printf("\n\n Entered number %d is a negative number ",number);

    }
return 0;
}