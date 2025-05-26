#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10+n; i=i+2)
    {
       for (int j = 10+n; j >=1 ; j=j-2)
       {
            printf(" ");
       }
       for (int j = 1; j <=10+n ; j=j+2)
       {
            printf("*");
       }
       printf("\n");
       
    }
    
    return 0;
}