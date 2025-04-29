#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = 0 ;
    if(!(a<=0 || b<=0)){
        for (int i = b; i <= a; i++)
        {
            sum+=i;
        }
        for (int i = b; i <= a; i++)
        {
            printf("%d ",i);
            if(i==a){
                printf("%d sum =%d",i, sum);

            }
        }
        
    }
   

    
    return 0;
}