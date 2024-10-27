#include <stdio.h>

int main() {
    int a = 58; // Initialize a with 58
    int b = 45;  // Initialize b with 45
    int result; // Variable to store the result

    // Assignment Operators
    result = a; // Assign the value of a to result
    printf("result = %d\n", result); // Print the value of result

    result += b; // Add b to result
    printf("After adding b, result = %d\n", result); // Print the new value of result

    result -= b; // Subtract b from result
    printf("After subtracting b, result = %d\n", result); // Print the new value of result

    result *= b; // Multiply result by b
    printf("After multiplying by b, result = %d\n", result); // Print the new value of result

    result /= b; // Divide result by b
    printf("After dividing by b, result = %d\n", result); // Print the new value of result

    result %= b; // Get the remainder of result divided by b
    printf("After modulus by b, result = %d\n", result); // Print the new value of result

    return 0; // End of the program
}
