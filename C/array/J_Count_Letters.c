#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", &str);
    int frq[26]={0};
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        frq[str[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(frq[i]>0){
            printf("%c : %d\n",i+97, frq[i]);
        }
    }
    
    return 0;
}
