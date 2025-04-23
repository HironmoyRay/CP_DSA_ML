#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101], str2[101];
    scanf("%s %s", &str1, &str2);
    // int len1 = strlen(str1);
    // int len2 = strlen(str2);
    // for (int i = 0; i <=len2; i++)
    // {
    //     str1[i+len1]=str2[i];
    // }
    strcat(str1, str2);
    printf("%s %s", &str1, &str2);
    

    return 0;
}