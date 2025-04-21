#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    printf("%d",length);
    

    return 0;
}