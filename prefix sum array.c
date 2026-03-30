#include <stdio.h>

void prefixSum(int n)
{
    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Proper prefix sum
    for(int i = 1; i < n; i++)
        arr[i] = arr[i] + arr[i-1];

    // Print prefix sum
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    prefixSum(n);
}
