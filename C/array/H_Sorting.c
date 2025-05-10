#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        // Swap a[i] and a[min_idx]
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    // Output sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
