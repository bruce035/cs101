#include <stdio.h>

int main() {
  int n = 10;

  if (n % 15 == 0) {
    printf("Love IU\n");
  } else if (n % 3 == 0) {
    printf("Love\n");
  } else if (n % 5 == 0) {
    printf("IU\n");
  } else {
    printf("%d\n", n);
  }

  return 0;
}
