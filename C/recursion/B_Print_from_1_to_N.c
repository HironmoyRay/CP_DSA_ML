#include<stdio.h>
void printNum(int n, int i){
if(i==n+1){
    return ;
}
printf("%d\n",i);
printNum(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printNum(n, 1);
    return 0;
}