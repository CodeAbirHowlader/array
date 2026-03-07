#include<stdio.h>
int main()
{
    char str[200],rev[200];
    scanf("%s",str);
    int i,j,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;

    }
    for(i=0,j=len-1;j>=0;j--)
    {
        rev[i]=str[j];
        i++;
    }
    rev[i]='\0';
    printf("%s",rev);
}
