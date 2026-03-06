#include<stdio.h>
int calculator(int b,int e);
int main()
{
    int b,e;
    scanf("%d%d",&b,&e);
    int result=calculator(b,e);
    printf("%d",result);
}
int calculator(int b,int e)
{
//if(e==0)
//{
//    return 1;
//}
//else
    return b*calculator(b,e-1);
}
