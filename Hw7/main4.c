#include <stdio.h>

int main(void) {
  int num = 12345, result = 0;


  // 將數字的各位數分獨成單獨的數字
  int ten_thousands = num / 10000;
  int thousands = (num / 1000) % 10;
  int hundreds = (num / 100) % 10;
  int tens = (num / 10) % 10;
  int ones = num % 10;

  // 將數字的萬位數和個位數交換，並保留其他位數
  result += ones * 1000;
  result += tens * 10;
  result += hundreds * 100;
  result += thousands ;
  result += ten_thousands * 10000;

  // 輸出結果
  printf("交換後的數字為：%d\n", result);

  return 0;
}
