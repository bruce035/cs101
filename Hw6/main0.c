#include <stdio.h>

int main() {
    int n = 10;  

    if ( n & (n - 1) == 0) {
        printf("%d is true\n", n); 
    } else {
        printf("%d is false\n", n);  
    }

    return 0;
}
