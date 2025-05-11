#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t1 = 0;
    int t2 = 1;
    int nextTerm = t1 + t2;
    if (n == 1)
    {
        printf("%d", t1);
    }
    else if (n == 2)
    {
        printf("%d", t2);
    }
    else
    {
        for (int i = 3; i < n; i++)
        {
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        printf("%d", nextTerm);
    }

    return 0;
}