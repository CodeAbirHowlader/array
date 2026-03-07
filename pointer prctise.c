#include <stdio.h>
int main()
{
    int A[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int B[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int C[10];   // enough size for common elements
    int i, j, n = 0;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if (A[i] == B[j]) {
                C[n] = A[i];  // store common element
                n++;
            }
        }
    }

    printf("The total number of common elements is %d\n", n);
    printf("Common elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
