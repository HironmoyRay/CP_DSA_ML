#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[5];
        scanf("%s", s);

        int num = atoi(s); // Convert the whole string to integer
        int found = 0;

        // Try all possible split positions from 0 to 4
        for (int i = 0; i <= 4; i++) {
            char partA[5] = {0};  // prefix (0 to i-1)
            char partB[5] = {0};  // suffix (i to 3)

            strncpy(partA, s, i);           // copy first i characters
            strncpy(partB, s + i, 4 - i);   // copy the rest

            int a = (strlen(partA) == 0) ? 0 : atoi(partA);
            int b = (strlen(partB) == 0) ? 0 : atoi(partB);

            int sum = a + b;
            if (sum * sum == num) {
                printf("%d %d\n", a, b);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("-1\n");
        }
    }

    return 0;
}
