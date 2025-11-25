#include <stdio.h>
int main()
{
    int row,col;
    int A[10][10], B[10][10], Sum[10][10];
    printf("Enter the row and col value: ");
    scanf("%d%d",&row,&col);


    printf("Enter elements of first matrix (3x4):\n");
   for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
         printf("A[%d][%d]= ", i, j);
        scanf("%d", &A[i][j]);

    }
}



    printf("Enter elements of second matrix (3x4):\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
            printf("B[%d][%d]=%d\n",i,j,B[i][j]);

        }
    }





    printf("\nSum of two matrices:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
