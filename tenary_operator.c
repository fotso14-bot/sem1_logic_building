#include <stdio.h>

int main(){

    // <condition> ? <first>:<secound>
    int n = 10;
    printf((n >= 0) ? ((n == 0) ? "zero" : "positive") : "negative");
}