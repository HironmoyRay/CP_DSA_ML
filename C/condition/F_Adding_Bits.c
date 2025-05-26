#include <stdio.h>
int main(){
    unsigned a, b;
    scanf("%u %u", &a, &b);
    
    printf("%d", a^b);
    
    return 0;
}