#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[10001];
        scanf("%s", &str);
        int smalls=0;
        int capitals=0;
        int digits=0;
        for (int i = 0; i < strlen(str); i++)
        {
            if('a'<=str[i] && str[i]<='z'){
                smalls++;
            }else if('A'<=str[i] && str[i]<='Z'){
                capitals++;
            }else{
                digits++;
            }
        }
        printf("%d %d %d\n", capitals, smalls, digits);
        
    }
    
    return 0;
}