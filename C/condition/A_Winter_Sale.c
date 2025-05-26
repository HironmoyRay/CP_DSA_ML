#include<stdio.h>
int main()
{
    float x, n;
    scanf("%f %f", &x, &n);
    float ans = (100*n)/(100-x);

    printf("%.2f", ans);
    
    return 0;
}