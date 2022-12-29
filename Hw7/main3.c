#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 81; i++) {
        int a = (i - 1) / 9 + 1;
        int b = (i - 1) % 9 + 1;
        printf("%d x %d = %2d", a, b, a * b);  // 將輸出的數字改為最少 2 位數

        // 如果 b 等於 9，就換行
        if (b == 9) {
            printf("\n");
        } else {  // 否則，就輸出三個空格
            printf("   ");
        }

        // 如果 a 等於 9 且 b 等於 9，就換列
        if (a == 9 && b == 9) {
            printf("\n");
        }
    }

    return 0;
}
