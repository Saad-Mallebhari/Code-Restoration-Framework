#include <stdio.h>

int main() {
    int a = 5;  // Set a to 5 (Binary: 0101)
    int b = 3;  // Set b to 3 (Binary: 0011)

    printf("Bitwise Operators:\n");

    // AND - Checks if both bits are 1
    printf("a & b = %d\n", a & b);  // Should be 1

    // OR - Checks if at least one bit is 1
    printf("a | b = %d\n", a | b);  // Should be 7

    // XOR - Checks if bits are different
    printf("a ^ b = %d\n", a ^ b);  // Should be 6

    // NOT - Flips all bits of a
    printf("~a = %d\n", ~a);        // Should be -6

    // Left shift - Moves bits in a one position to the left
    printf("a << 1 = %d\n", a << 1); // Should be 10

    // Right shift - Moves bits in a one position to the right
    printf("a >> 1 = %d\n", a >> 1); // Should be 2

    return 0;
}
