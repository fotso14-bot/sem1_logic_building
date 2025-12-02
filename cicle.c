#include <stdio.h>
//#include <conio.h>
int main() {

    int radius;
    static float PI = 3.142;
    float area;
    float circumfrence;

    //	clrscr();
    printf("Program to calculate Area and Circumference of Circle :  \n\n");

    printf("Enter the radius of Circle : ");
    scanf("%d", &radius);

    area = PI*radius*radius;

    circumfrence = 2*PI*radius;

    printf("\n\nArea of circle with radius %d = %f  \n\n",radius,area);


    printf("Circumference of circle with radius %d = %f  \n\n",radius,circumfrence);


return 0;
}