#include<stdio.h>
int main()
{
    char s[78];
    scanf("%s", &s);
    char alphabet[26]={0};
    for (int i = 0; i < 78; i++)
    {
        alphabet[s[i]-97]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(alphabet[i]<3){
            printf("%c", i+97);
            break;
        }
    }

    return 0;
}