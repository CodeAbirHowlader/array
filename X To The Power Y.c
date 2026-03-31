#include<stdio.h>

int calculator(int b, int e)
{
    if(e == 0) return 1;   // base case
    return b * calculator(b, e - 1);
}

int main()
{
    int b, e;
    scanf("%d%d", &b, &e);

    int result = calculator(b, e);
    printf("%d", result);

    return 0;
}
