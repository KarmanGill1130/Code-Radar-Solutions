#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32]; // Array to store binary digits (max 32-bit integer)
    int index = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        binary[index++] = num & 1; // Get the last bit using bitwise AND
        num >>= 1; // Right shift to process the next bit
    }

    // Print binary in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}