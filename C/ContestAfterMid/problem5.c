#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    char alpha[26] = {0};
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        alpha[a[i] - 'a']++;
        alpha[b[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            continue;
        }
        else if (alpha[i] == 2)
        {
            sum++;
        }
    }
    if (sum == strlen(a))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}