#include<stdio.h>
int main()
{
    char str[100], rev[100];
    int i = 0, j, len = 0,flag=0;

    printf("Enter a string: ");
    scanf("%s", str);


    while (str[len] != '\0') {
        len++;
    }


    for (j = len - 1; j >= 0; j--) {
        rev[i] = str[j];
        i++;
    }


    rev[i] = '\0';


i=0;
        while(str[i]!='\0'||rev[i]!='\0')
        {
            if(str[i]!=rev[i])
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

