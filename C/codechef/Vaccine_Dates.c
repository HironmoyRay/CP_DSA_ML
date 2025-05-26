#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if ((a >= b) && (a <= c))
        {
            printf("Take second dose now\n");
        }
        else if (a < b)
        {
            printf("Too Early\n");
        }
        else if (a > c)
        {
            printf("Too Late\n");
        }
    }
    return 0;
}
