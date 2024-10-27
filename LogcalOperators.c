#include <stdio.h>

int main() {
    int a = 10; // Initialize a with 10
    int b = 8;  // Initialize b with 8

    // Using AND operator
    if (a > 8 && b < 10) {
        printf("Both a is greater than 8 and b is less than 10\n");
    } 
    else {
        printf("At least one of the conditions is false (AND)\n");
    }

    // Using OR operator
    if (a < 8 || b == 8) {
        printf("At least one condition is true: a is less than 8 OR b is equal to 8\n");
    } 
    else {
        printf("Both conditions are false (OR)\n");
    }

    // Using NOT operator
    if (!(a < b)) {
        printf("a is NOT less than b\n"); // This will be true
    } 
    else {
        printf("a is less than b\n");
    }

    return 0; // End of the program
}
