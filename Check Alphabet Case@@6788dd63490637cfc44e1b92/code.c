#include <stdio.h>

int main() {
    char c;
    scanf("%s", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase\n");
    else
        printf("Lowercase\n");
    return 0;
}