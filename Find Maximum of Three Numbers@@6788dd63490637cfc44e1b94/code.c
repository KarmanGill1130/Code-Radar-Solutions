#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d\n",a);
    }
    else if (b>c && b>a){
        printf("%d\n",b);
    }
    else if (c>a && c>b){
        printf("%d\n",c);
    }
    else
        printf("Same")
    return 0;
}