#include<stdio.h>
int main()
{
    int arr[5]={11,22,33,44,55};
    int byte=sizeof(arr);
    int onech=sizeof(arr[0]);
    int size=byte/onech;
    printf("%d",size);
}
