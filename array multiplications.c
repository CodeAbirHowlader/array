#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int r1,c1,c2,r2;
    printf("Enter the value of r1,c1,r2,c2: ");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    while(c1!=r2)
    {
        printf("Bal koros\n");
            printf("Enter the value of r1,c1,r2,c2");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            {
                C[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    C[i][j]+= A[i][k]*B[k][j];
                }
        }
    }
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {

            printf("%5d",C[i][j]);
        }
        printf("\n");
    }
}
