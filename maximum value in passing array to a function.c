#include<stdio.h>
int  maximum(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int result=maximum(arr,n);
    printf("%d",result);
}
 int maximum(int arr[],int n)
  {
      int max=arr[0];
      for(int i=0;i<n;i++)
      {
      if(max<arr[i])
      {
          max=arr[i];
      }
      }
      return max;
  }
