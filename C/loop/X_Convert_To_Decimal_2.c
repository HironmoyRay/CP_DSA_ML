#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int ones = 0;
        int temp = n;


        while (temp > 0) {
            ones += temp % 2; 
            temp /= 2;        
        }

        int result = 0;
        for (int i = 0; i < ones; i++) {
            result = (result << 1) | 1;
        }

        printf("%d\n", result);
    }

    return 0;
}
