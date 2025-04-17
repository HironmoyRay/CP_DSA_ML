#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={10, 25, 06, 99, 34};
    int mx= INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", mx);
    
    return 0;
}