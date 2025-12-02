#include <stdio.h>

int main() {

    int year;

    printf("\n\n Enter your desired year : ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ( ( year % 100 != 0) && (year % 4 == 0 ))) {

        printf("\n\n %i is a leap year!",year);
    }
    else {

        printf("\n\n %i is not a leap year!!",year);
    }
   return 0;
}

