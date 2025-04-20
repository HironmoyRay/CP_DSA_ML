#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mx = INT_MIN;
    int mn = INT_MAX;

    int mxIdx;
    int mnIdx;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<mn){
            mn = arr[i];
            mnIdx = i;
        }
        if(arr[i]>mx){
            mx = arr[i];
            mxIdx = i;
        }
    }

    int tmp;
    tmp = arr[mxIdx];
    arr[mxIdx] = arr[mnIdx];
    arr[mnIdx] = tmp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}