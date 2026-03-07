#include <stdio.h>

int frequency(float arr[], int n, float t);

int main() {
    int n, result;
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float t;
    scanf("%f", &t);

    result = frequency(arr, n, t);
    printf("%d", result);

    return 0;
}

int frequency(float arr[], int n, float t) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            count++;
        }
    }
    return count;
}
