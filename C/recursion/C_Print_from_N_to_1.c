#include<stdio.h>
void printNum(int n, int i){
if(i==n+1){
    return ;
}
printNum(n, i+1);
if(i==n){
    printf("%d",i);
} else{
    printf(" %d",i);
}
}
int main()
{
    int n;
    scanf("%d", &n);
    printNum(n, 1);
    return 0;
}