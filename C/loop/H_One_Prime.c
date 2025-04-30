#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flug = 0;
    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0){
            flug++;
        }
    }
    if (flug==0)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}