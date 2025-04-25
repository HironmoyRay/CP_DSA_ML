#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000001];
    scanf("%s", str);
    printf("%s\n", str);  // Optional, just echoes the input

    int fr[26] = {0};  // Initialize frequency array to zero

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')  // Only count lowercase letters
        {
            fr[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (fr[i] != 0)
        {
            printf("%c: %d\n", 'a' + i, fr[i]);  // Print letter and its frequency
        }
    }

    return 0;
}
