#include<stdio.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s %s", &a, &b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);
    char c[21];
    for (int i = 0; i < lenA+lenB; i++)
    {
        if(i<lenA){
            c[i]=a[i];
        }
        else{
            c[i] = b[i-lenA];
        }
    }
    for (int i = 0; i < lenA+lenB; i++)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    for (int i = 0; i <= lenA+lenB; i++){   
        
        if(i==0){
            printf("%c", b[0]);
        }
        else if(i<lenA){
            printf("%c",c[i]);
        }
        else if(i==lenA){
            printf(" ");
        }
        else if(i==lenA+1){
            printf("%c",a[0]);
        }
        else if(i > lenA+1){
            printf("%c",c[i-1]);
        }
    }
    
    
    
    return 0;
}