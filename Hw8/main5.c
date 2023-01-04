#include <stdio.h>

int main(void) {
  int i, j, k;

  for (i = 0; i <= 2; i++) {
    for (j = 6; j > i; j--) {
      printf(" ");
    }
    for (k = 1; k <= (i * 2) + 1; k++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = 1; i <= 5; i++) {
    for (j = 7; j > i; j--) {
      printf(" ");
    }
    for (k = 1; k <= (i * 2) - 1; k++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = 1; i <= 7; i++) {
    for (j = 7; j > i; j--) {
      printf(" ");
    }
    for (k = 1; k <= (i * 2) - 1; k++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = 1; i <= 5; i++) {
    printf(" ");
  }
  printf("***\n");

  return 0;
}
