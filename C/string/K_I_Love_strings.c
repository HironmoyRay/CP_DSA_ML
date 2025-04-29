#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str1[51], str2[51], str3[101];
        scanf("%s %s", &str1, &str2);
        for (int i = 0; i < 51; i++)
        {
            if(str1[i]=='\0')
            str3[i*2]=str1[i];
            str3[i*2+1]=str2[i];
        }
        
        
    }
    
    return 0;
}