#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0)
        return 32; // If the number is 0, all bits are 0

    int count = 0;

    while ((num & 1) == 0) { // Check if LSB is 0
        count++;
        num >>= 1; // Right shift to move to the next bit
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);

    return 0;
}