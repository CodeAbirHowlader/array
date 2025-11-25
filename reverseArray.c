#include<stdio.h>
void reverseArray(int a)
{
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=a-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    reverseArray(n);
}
