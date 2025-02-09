#include <stdio.h>

int main() {
    int a;
    scanf("d" ,&a);
    int flipped = ~a;
    printf("%d\n", flipped);
    return 0;
}