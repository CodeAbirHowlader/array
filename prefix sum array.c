#include <stdio.h>

void prefixSum(int n)
{
    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Prefix sum using swap-style update
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];   // store current
        arr[i] = arr[i] + arr[i+1];  // update (like swap logic)
       arr[i] + arr[i+1] = temp ;       // assign back just to show swap usage
    }

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
