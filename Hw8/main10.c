#include <stdio.h>

int main(void) {
    char number[] = "1234";

    int len = 0;
    while (number[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", number[i]);
    }

    return 0;
}
