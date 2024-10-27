#include <stdio.h>

int main() 
{
    int a = 20; // Initialize a with 10
    int b = 5;  // Initialize b with 5
    int result; // Variable to store the result

    // Ternary Operator
    result = (a > b) ? a : b; // Check if a is greater than b; assign a or b to result

    printf("The greater value is result = %d\n", result); // Print the value of result

    return 0; 
}
