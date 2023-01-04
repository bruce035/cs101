#include <stdio.h>

int count_ones(unsigned int x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int main(void) {
    unsigned int x=15;
    printf("%d\n", count_ones(x));
    return 0;
}
