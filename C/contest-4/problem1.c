#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int dash=1;
    int space=n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=space ; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= dash; j++)
        {
            if(i%2==0){
                printf("-");
            }else {
                printf("#");
            }
        }
        dash+=2;
        space--;
        printf("\n"); 
    }
    int dash2 = 2*(n-1)-1;
    int space2 = 1;
    for (int i = n-1; i >= 1; i--)
    {
        
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= dash2 ; j++)
        {
            if(i%2==0){
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
        dash2-=2;
        space2++; 
    }
    
    
    return 0;
}