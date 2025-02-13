// Your code here...
#include<stdio.h>
int main(){
    Char c;
    scanf("%c", &c);
    if (c == 'A'){
        printf("Excellent");
    }
    else if (c == 'B'){
        printf("Good");
    }
    else if (c == 'C'){
        printf("Average");
    }
    else if (c == 'D'){
        printf("Below Average");
    }
    else{ 
        printf("Invalid grade");
    }
    return 0;

}