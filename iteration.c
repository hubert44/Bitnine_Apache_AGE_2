#include <stdio.h>

int fib(int n) {
    int a = 0, b = 1, c = 2;
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else if (n == 2) {
        return c;
    } else {
        for (int i = 3; i <= n; i++) {
            int temp = c + b;
            a = b;
            b = c;
            c = temp;
        }
        return c;
    }
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, fib(n));
    return 0;
}
