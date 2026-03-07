#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int flag=0;
    scanf("%s%s",str1,str2);
    int i=0,j;
    int len1=0,len2=0;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    {
        len2++;
    }
    if(len1!=len2)
    {
        flag=1;
    }



        while(str1[i]!='\0'||str2[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                flag=1;
                break;
            }
            i++;
        }

    if(flag==0)
    {
        printf("Same same but different\n");
    }
    else{
        printf("NOt same bro \n");
    }
}
