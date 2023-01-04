#include <stdio.h>

int main(void) {
  int i, j, k;

  for (i = 0; i <= 3; i++) {
    for (j = 3; j > i; j--) {
      printf(" ");
    }
    for (k = 1; k <= (i * 2) + 1; k++) {
      printf("*");
    }
    printf("\n");
  }
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7 ; j++) {
            if (i == 1 || i == 7 || j == 1 || j == 7) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
