// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
        char letter = 'A'; // Initialize the letter to 'A'
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter); // Print the current letter
            letter++; // Move to the next letter
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}