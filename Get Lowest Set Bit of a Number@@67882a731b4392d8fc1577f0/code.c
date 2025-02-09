#include <stdio.h>

int findLowestSetBit(int num) {
    if (num == 0)
        return -1; // Return -1 if no set bit is found

    int position = 0;

    while ((num & 1) == 0) { // Check if LSB is 0
        num >>= 1; // Right shift to check next bit
        position++;
    }

    return position;
}

int main() {
    int num;
    scanf("%d", &num);

    int position = findLowestSetBit(num);

    if (position == -1)
        printf("No set bit found\n");
    else
        printf("%d\n", position);

    return 0;
}