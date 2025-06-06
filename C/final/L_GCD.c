#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int result = gcd(A, B);
    printf("%d\n", result);

    return 0;
}
