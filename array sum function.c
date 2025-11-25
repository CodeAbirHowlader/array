#include<stdio.h>
void sumarray(int a)
{
    int arr[a],sum=0;
    printf("Enter elements: ");

    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[a]);
        sum+=arr[a];
    }
    printf("%d",sum);
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    sumarray(n);
}
