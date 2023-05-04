#include <stdio.h>

int memo[100] = {0, 1, 2};

int fib(int n) {
    if (memo[n] != 0) {
        return memo[n];
    } else {
        memo[n] = fib(n - 3) + fib(n - 2);
        return memo[n];
    }
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, fib(n));
    return 0;
}
