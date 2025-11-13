// ACOSTA, JAHZIEL LOUIS ROSH R. DIT1-2 // 
#include <stdio.h>

int main() 
{
    
    int x;
    int y;

    printf("\n-- ARITHMETIC OPERATIONS --\n");

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %d\n", x / y);

    printf("\n-- LOGICAL OPERATORS --\n");

    if (x % 2 == 0 && y % 2 == 0) {
    printf("Both variables are even numbers.\n");
    }

    else if (x % 2 == 0 || y % 2 == 0) {
    printf("At least one variable is an even number.\n");
    }

    else if (!(x % 2 == 0 && y % 2 == 0)) {
    printf("Both variables not are even numbers.\n");
    }

    else {
    printf("Insufficient data.\n"); 
    }

    printf("\n-- ASSIGNMENT OPERATORS --\n");

    printf("%d\n", x += y);
    printf("%d\n", x -= y);
    printf("%d\n", x *= y);
    printf("%d\n", x /= y);
    printf("%d\n", x % y);
    
    return 0;
}