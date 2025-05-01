#include<stdio.h>
int main()
{
    int t;
    scanf("%d ", &t);
    for (int i = 0; i < t; i++)
    {
        char s1[51], s2[51], s3[101];
        scanf("%s %s", &s1, &s2);
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        for (int j = 0; j < len2; j++)
            {
                s3[i*2]=s1[i];
                s3[i*2+1]=s2[i];
            }
        printf("%s",s3);

    }
    
    return 0;
}