#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf(a\n);
    }
    else if (b>c && b>a){
        printf(b\n);
    }
    else if (c>a && c>b){
        printf(c\n);
    }
    else
        printf("Same")
    return 0;
}