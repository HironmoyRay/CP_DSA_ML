#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);
    int flug = 0;
    for (int i = 0, j = strlen(str)-1 ; i < j; i++, j-- ) {
        if(str[i] == str[j]){
            continue;
        }
        else{
            flug++;
            break;
        }
    }
    if(flug == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}