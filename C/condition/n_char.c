// #include<stdio.h>
// int main()
// {
//     char x;
//     int y;
//     scanf("%c",&x);
//     y=(int)x;
//     if(y<97){
//         y=y+32;
//         printf("%c",y);
//     }
//     else{
//         y=y-32;
//         printf("%c",y);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if(x>=65 && x<=90){
        printf("%c", x+32);
    }
    else {
        printf("%c", x-32);
    }
    return 0;
}