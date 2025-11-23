#include <stdio.h>
int tribonacci(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = tribonacci(n);
    printf("Result is: %d\n", result);

    return 0;
}

int tribonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    int a = 0, b = 1, c = 1, d;
    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}
