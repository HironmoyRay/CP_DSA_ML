#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        long long int ans=1;
        for (int j = 1; j <= n; j++)
        {
            ans=ans*j;
        }
        printf("%lld\n",ans);
        
    }
    

    return 0;
}