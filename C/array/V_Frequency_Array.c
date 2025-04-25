#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int fr[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    
    for (int i = 1; i <= m; i++)
    {
        fr[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fr[i]);
    }
    
    
    return 0;
}