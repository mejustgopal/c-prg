#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2, result;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform bitwise AND operation
    result = num1 & num2;

    // Display the result
    printf("The result of %d & %d is: %d\n", num1, num2, result);

    return 0;
}

