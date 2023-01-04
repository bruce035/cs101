#include <stdio.h>
#include <math.h>

int main() {
    float f = 2.34;
    int i = (int)f;
    if (f - i >= 0.5) {
        printf("%d\n", i + 1);
    } else {
        printf("%d\n", i);
    }
    return 0;
}
