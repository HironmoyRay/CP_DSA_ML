#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[101];
        scanf("%s", &str);
        int len = strlen(str);
        if (len <= 10)
        {
            for (int j = 0; j < len; j++)
            {
                printf("%c", str[j]);
            }
        }
        else{
            printf("%c%d%c", str[0], len-2, str[len-1]);
        }
        printf("\n");
    }

    return 0;
}