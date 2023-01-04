#include <stdio.h>

int main(void) {
  int num = -999, sum = 0, max_digit = -1;
  int is_negative = 0;

  // 判斷數字是否為負數
  if (num < 0) {
    is_negative = 1;
    num = -num;
  }

  // 計算各數位之和
  while (num > 0) {
    int digit = num % 10;
    sum += digit;
    if (digit > max_digit) {
      max_digit = digit;
    }
    num /= 10;
  }

  // 如果數字原本是負數，則將總和減去兩倍最大位數
  if (is_negative) {
    sum -= 2*max_digit;
  }

  printf("Sum of digits: %d\n", sum);
  return 0;
}
