#include <stdio.h>

int main() {
    char c;
    scanf("%s", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase\n");
    else if(c >= 'a' && c<= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet");
    return 0;
}