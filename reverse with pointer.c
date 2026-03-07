#include <stdio.h>
int main()
{
    int n, i, arr1[100];
    int *pt;

    printf("Input the number of elements to store: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element-%d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    pt = &arr1[n-1];
    printf("\nThe elements of array in reverse order are:\n");
    for(i = n; i > 0; i--) {
        printf("element - %d : %d\n", i, *pt);
        pt--;
    }
    return 0;
}
