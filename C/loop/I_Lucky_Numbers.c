#include <stdio.h>
int main()
{

   int x;
   scanf("%d",&x);
  if ((x % 10) % (x / 10) == 0 || (x / 10) % (x % 10) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    return 0;
}