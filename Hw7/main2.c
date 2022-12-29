#include <stdio.h>
#include <math.h>

int main() {
  double pi = 0;
  int sign = 1;
  int i;

  for (i = 0; i < 100000; i++) {
    double term = 4.0 / (2 * i + 1);
    pi += sign * term;
    sign = -sign;

    if (fabs(pi - M_PI) < 0.00001) {
      break;
    }
  }

  printf("x = %d\n", 2 * i + 1);

  return 0;
}
