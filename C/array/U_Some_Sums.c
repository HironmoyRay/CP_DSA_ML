#include<stdio.h>
int digit_sum(int x){
    int sum = 0;
    while (x>0)
    {
        sum += x%10;
        x /= 10;
    }

    return sum;
    
}
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int d_sum = digit_sum(i);
        if(d_sum>=a && d_sum<=b){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}