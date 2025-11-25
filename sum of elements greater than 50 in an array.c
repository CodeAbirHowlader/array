#include<stdio.h>
void arrSum(int a)
{
    int arr[a],sum=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>50)
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
    arrSum(n);
}
