#include<stdio.h>
#include<stdbool.h>
int main()
{
    while(true){
        int n;
        scanf("%d",&n);
        if(n==1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}