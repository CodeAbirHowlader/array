#include<stdio.h>
void swap(int a,int b);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("\n%d %d",m,n);
    swap(m,n);
    printf("\n%d %d",m,n);
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
