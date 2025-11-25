#include<stdio.h>

void evenSum(int a)
{
    int arr[a];
    int sum = 0;

    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers = %d\n", sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    evenSum(n);

    return 0;
}
