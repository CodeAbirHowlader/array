#include<stdio.h>
int main() {
    int n, h, width = 0, a;
    scanf("%d %d", &n, &h);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a <= h)
            width += 1;
        else
            width += 2;
    }
    printf("%d\n", width);
    return 0;
}
