#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("NO\n");
        return 0;
    }

    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    bool flag = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i == j || j == r - 1 - i))
            {
                if (ar[i][j] != 1)
                    flag = false;
            }
            else
            {
                if (ar[i][j] != 0)
                    flag = false;
            }
        }
    }

    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
