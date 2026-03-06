//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[100], result[100];
//    int i, j = 0;
//
//    printf("Enter a string: ");
//    scanf("%s", str);
//
//    for(i = 0; i < strlen(str); i++) {
//        // যদি অক্ষর না হয় (A-Z বা a-z এর বাইরে)
//        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
//            result[j++] = str[i];
//        }
//    }
//    result[j] = '\0';
//
//    printf("Output string: %s\n", result);
//
//    return 0;

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
