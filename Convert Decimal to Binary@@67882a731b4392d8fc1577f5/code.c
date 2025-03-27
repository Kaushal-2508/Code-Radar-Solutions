#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binary[i] = n & 1; // Get the last bit using bitwise AND
        n = n >> 1;        // Right shift to process the next bit
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
