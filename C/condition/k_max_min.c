#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        if(b>=c){
            printf("%d %d", c, a);
        }
        else{
            printf("%d %d", b, a);
        }
    }
    else if (b>=c && b>=a){
        if(c>=a){
            printf("%d %d", a, b);
        }
        else{
            printf("%d %d", c, b);

        }
    }
    else if (c>=a && c>=b){
        if(b>=a){
            printf("%d %d", a, c);
        }
        else{
            printf("%d %d", b, c);

        }
    }
   
    
    return 0;
}