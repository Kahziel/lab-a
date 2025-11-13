// ACOSTA, JAHZIEL LOUIS ROSH R. DIT1-2 // 
#include <stdio.h>

int main () 
{

    int x;

    printf("\n-- IF-ELSE STATEMENT --\n");

    printf("Provide a value for x: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("This is an even number.");
    }

    else {
        printf("This is an odd number.");
    }

    return 0;

}