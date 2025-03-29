// Your code here...
#include <stdio.h>

int main(){
    for (int i = rows; i >= 1; i--) { // Loop for rows in reverse
        for (int j = 1; j <= i; j++) { // Loop for printing numbers
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
}