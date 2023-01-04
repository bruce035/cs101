#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 255, i;
  char output[9];  
  
  for (i = 7; i >= 0; i--) {
    output[i] = (n % 2) + '0';  
    n /= 2;  
  }
  output[8] = '\0'; 

  for (i = 0; i < 8; i++) {
    printf("%c", output[i]);
    if (i % 4 == 3) {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}
