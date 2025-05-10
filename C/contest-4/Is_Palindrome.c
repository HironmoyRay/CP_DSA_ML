#include<stdio.h>
#include<string.h>
int is_palindrome(char* s){
    for (int i = 0, j=strlen(s)-1; i<j; i++, j--){
        if(s[i]!= s[j]){
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int result = is_palindrome(s);
    if(result == 0){
        printf("Not Palindrome");
    }else{
        printf("Palindrome");
    }

    return 0;
}