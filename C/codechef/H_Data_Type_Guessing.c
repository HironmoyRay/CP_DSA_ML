#include <stdio.h>

int main() {
    double n, k, a;
    scanf("%lf %lf %lf", &n, &k, &a);
    double result = ((n*k)/a);
    if(result == (long long) (result)){
        if(result>= -2147483648 && result <= 2147483647){
            printf("int");
        }else {
            printf("long long");
        } 
    } else {
            printf("double");
        }
    return 0;
}