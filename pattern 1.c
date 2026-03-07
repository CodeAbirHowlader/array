//#include<stdio.h>
//int main()
//{
//    int r=5;
//    for(int i=1;i<=r;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            printf("%d ",j%2);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int r=5;
//    for(int i=r;i>=1;i--)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            printf("%d ",j%2);
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
     for(int i=r-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }

}

