#include <stdio.h>
int main() {

    int number,sum,temp_var;

    printf("\n\n Enter Number : ");
    scanf("%d", &number);

    printf("\n\n Number : %i",number);

    sum = 0;
    while(number >=1 ) {

        temp_var = number%10; //get unit place digit
        sum = sum + 1;
        number = number/10; //remove the last digit


    }

    printf("\n\n Total Digits : %i", sum);

}
