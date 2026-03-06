//#include <stdio.h>
//
//int main() {
//    int num, i;
//    unsigned long long factorial = 1;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//
//    if (num < 0) {
//        printf("Error! Factorial of a negative number doesn't exist.");
//    } else {
//
//        for (i = 1; i <= num; ++i) {
//            factorial *= i; // factorial = factorial * i
//        }
//        printf("Factorial of %d = %llu", num, factorial);
//    }
//
//    return 0;
//}

#include<stdio.h>
int factor(long long n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factor(n-1);
    }
}
int main()
{
    long long n=5;
//    long long fact=1;
    if(n<0)
    {
        printf("Try again\n");
    }
    else
    {
        printf("%lld",factor(n));
    }
}























