#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s" ,&str1 ,&str2);
    // for (int i = 0; i <= strlen(str2); i++)
    // {
    //     if(i>=2){
    //         printf("%c %d\n",str1[i], i);
    //     }
    //     str1[i]=str2[i];
    // }
    strcpy(str1,str2);
    printf("%s %s", str1, str2);
    
    return 0;
}