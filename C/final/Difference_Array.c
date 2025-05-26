#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j]=a[j];
        }
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int temp;
                if(b[j]>b[k]){
                    temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
            
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", (a[j] - b[j]) >= 0 ? (a[j] - b[j]) : (b[j] - a[j]));
        }
        printf("\n");
        
        
        
        
    }
    
    return 0;
}