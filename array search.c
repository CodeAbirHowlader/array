#include<stdio.h>
int main()
{
    int arr[]={12,32,42,23,34};
    int a,pos=-1;
    scanf("%d",&a);
    for(int i=0;i<5;i++)
    {
        if(a=arr[i])
            break;
        pos=i+1;
    }
    scanf("%d",&pos);

}
