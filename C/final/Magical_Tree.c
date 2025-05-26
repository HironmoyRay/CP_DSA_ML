#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
<<<<<<< HEAD
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
    
=======
    int rows = 6 + n / 2;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

>>>>>>> 0012e6f0ee516c09086be2a86c67ff7106ff7f32
    return 0;
}