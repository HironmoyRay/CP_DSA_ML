#include <stdio.h>

int main()
{
    int n, original, reversed = 0, reminder;
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }

    printf("%d\n", reversed);

    if (original == reversed)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}