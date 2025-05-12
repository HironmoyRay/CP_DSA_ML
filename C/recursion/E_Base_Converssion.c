#include<stdio.h>
void printBinary(int n){
    if(n==0){
        return;
    }
    printBinary(n/2);
    printf("%d", n%2);

}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n==0){
            printf("0");
        }else{
            printBinary(n);
        }
        printf("\n");
    }
    
    return 0;
}