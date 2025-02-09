#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0)
        return 32; // All bits are 0

    int count = 0;
    int mask = 1 << 31; // Start with MSB (Most Significant Bit)

    while ((num & mask) == 0) { // Check if MSB is 0
        count++;
        mask >>= 1; // Shift mask to the right
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}