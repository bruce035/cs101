#include <stdio.h>

int main() {
    int n = 10;  
    int original = n;  

    if (n <= 0) {
        printf("%d is false\n", n);
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        printf("%d is true\n", original); 
    } else {
        printf("%d is false\n", original);  
    }

    return 0;
}
