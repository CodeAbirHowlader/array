#include<stdio.h>
void arraySum(int a)
{
    int arr[a],sum=0;
    int count = 0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);

        for(int j=0;j<i;j++)
        {

           if( arr[i]==arr[j])
           {
            count=1;
            break;
        }
        }
        if(count==0)
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
    arraySum(n);
}
