#include  <stdio.h>
int main() {


    int coeff=1;
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=8-i;j++) {

            printf("  ");

        }
        for(k=0; k<=i; k++)
        {
            if (k==0 || i==0) {

                coeff=1;
            }
            else {

                coeff = coeff*(i-k+1)/k;
            }

            printf("%4d",coeff);
        }
        printf("\n");
    }
    return 0;
}