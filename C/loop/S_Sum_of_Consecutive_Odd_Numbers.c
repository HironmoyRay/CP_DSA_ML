#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int x, y;
        long long int sum = 0;
        scanf("%d %d", &x, &y);
        if (x <= y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
        }
        else
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
        }
        printf("%lld\n", sum);
        t--;
    }
    return 0;
}