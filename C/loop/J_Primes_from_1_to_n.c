#include<stdio.h>
#include<math.h>
int isPrime(int i){
    if(i<=1){
        return 0;
    }
    for (int j = 2; j <= sqrt(i); j++)
    {
        if(i%j==0){
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    
    return 0;
}