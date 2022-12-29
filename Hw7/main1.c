#include <stdio.h>

int main()
{
    int i, j;

    // 外層迴圈控制正三角形的層數
    for (i = 1; i <= 7; i++)
    {
        // 內層迴圈控制每一層中的空格數量
        for (j = 1; j <= 7 - i; j++)
        {
            printf(" ");
        }

        // 內層迴圈控制每一層中的數字數量
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
