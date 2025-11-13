// ACOSTA, JAHZIEL LOUIS ROSH R. DIT1-2 // 
#include <stdio.h>

int main () 
{

    int x = 1;

    printf("\n-- WHILE LOOP --\n");
    while (x <= 10) {
        printf("%d\n", x);
        ++x;
    }

    int y;

    printf("\n-- FOR LOOP --\n");
    for (y = 2; y <= 20; y += 2) {
        printf("%d\n", y);
    }

    int z = 1;

    printf("\n-- DO-WHILE LOOP --\n");
    do { 
        printf("%d\n", z);
        ++z;
    }
    while (z <= 5);

    return 0;

}