#include <stdio.h>
long long int factorial(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n == 1)
        {
            return 1;
        }
        long long int mul = factorial(n - 1);
        return n * mul;
    }
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = factorial(n);
    printf("%lld", ans);
    return 0;
}