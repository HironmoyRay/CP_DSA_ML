#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j] + (j + 1) - (i + 1);
                if (sum < mn)
                {
                    mn = sum;
                }
            }
        }
        printf("%d\n", mn);
    }

    return 0;
}