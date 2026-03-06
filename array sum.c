#include<stdio.h>
int main()
{
    int n;int t;
    int arraysum[4][3]={
        {2,6,5},
        {4,9,1},
        {3,2,4},
        {4,7,2}
    };

    for(int j=0;j<4;j++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=arraysum[i][j];
        }
        printf("%d\n",sum);
    }
}
