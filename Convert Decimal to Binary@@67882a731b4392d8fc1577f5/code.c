#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n"); // Special case: All bits are zero
        return 0;
    }

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break; // Stop when we find the first set bit (1)
        }
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}