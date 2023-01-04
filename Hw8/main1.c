#include <stdio.h>

int main()
{
    int rows = 10;
    for (int row = 1; row <= rows; row++) {
        
        for (int i = 1; i <= rows - row; i++) {
            printf(" ");
        }
        
        for (int i = 1; i <= 2 * row - 1; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
