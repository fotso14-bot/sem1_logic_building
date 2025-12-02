#include <stdio.h>
#define maxsize 100

int a[maxsize] = {10, 20, 30, 40, 50};
int i;
int size = 5; // Initial size of array

int main() {
    int n, pos;
    printf("Enter the element: ");
    scanf("%d", &n);
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos > size || pos < 0 || size >= maxsize) {
        printf("Invalid position or array full\n");
    } else {
        for (i = size; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = n;
        size++;

        printf("Updated array: ");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}