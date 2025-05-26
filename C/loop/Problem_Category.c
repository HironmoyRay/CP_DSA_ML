#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        if(x>=1 && x<100){
            printf("Easy\n");
        } else if(x>=100 && x<200){
            printf("Medium\n");
        } else if(x>=200 && x<=300){
            printf("Hard\n");
        }
    }
    
    return 0;
}