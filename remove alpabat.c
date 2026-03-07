

#include<stdio.h>
int main()
{
char str[100],result[100];
int i,j=0;
//for(i=0;str[i]!='\0';i++)
//{
    scanf("%s",str);

for(int i=0;str[i]!='\0';i++)
{
    if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
    {
        result[j++] = str[i];
    }
}

result[j]='\0';
printf("%s",result);

}
