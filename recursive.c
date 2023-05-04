#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return fib(n - 3) + fib(n - 2);
    }
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, fib(n));
    return 0;
}
