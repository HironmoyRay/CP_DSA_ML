#include <stdio.h>
void print(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", c);
    }
    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        char c;
        scanf("%d %c", &n, &c);
        print(c, n);
    }

    return 0;
}