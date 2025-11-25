#include<stdio.h>
void  negativeSum(int a)
{
    int arr[a],sum=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    negativeSum(n);
}
