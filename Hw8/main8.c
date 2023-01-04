#include <stdio.h>

int main(void) {
  int i, j, k;
  for (i = 4; i >= 1; i--) {
    for (j = 4; j > i; j--) {
      printf(" ");
    }
    for (k = (i * 2) - 1; k >= 1; k--) {
      printf("*");
    }
    printf("\n");
  }

  for (i = 2; i <= 4; i++) {
    for (j = i; j < 4; j++) {
      printf(" ");
    }
    for (k = 1; k < (i * 2); k++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
