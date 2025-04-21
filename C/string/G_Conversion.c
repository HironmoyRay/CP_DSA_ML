#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    char str2[100001];
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]>'Z'){
            str2[i]=str[i]-32;
        }
        if(str[i]<'a'){
            str2[i] = str[i]+32;
        }
        if(str[i]==','){
            str2[i]=' ';
        }
    }
    printf("%s", str2);
    
    return 0;
}