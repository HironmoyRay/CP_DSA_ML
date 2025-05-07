#include<stdio.h>
void min_max(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j]){
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j]=temp;
            }
        }
        
    }
    
    printf("%d ", a[0]);
    printf("%d", a[n-1]);
} 
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min_max(a,n);
    
    return 0;
}