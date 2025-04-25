#include<stdio.h>
#include<string.h>
int main()
{
    char str[10001];
    scanf("%s", &str);
    int alphabets[26];
    for (int i = 0; i < strlen(str); i++)
    {
        alphabets[str[i]-'a']++;
    }
    for (int i = 0; i <26; i++)
    {
        if(alphabets[i]!=0){

            printf("%c - %d\n",i+97, alphabets[i] );
        }
    }
    
    
    return 0;
}