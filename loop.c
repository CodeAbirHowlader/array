//reverse
//
//
#include <stdio.h>

int main() {
    int num = 5213;
    int digits;
   do {
        digits = num % 10;
         printf("%d",digits);
        num = num / 10;
    }
     while (num > 0);
    return 0;
}
//
//
//normal
//
//#include <stdio.h>
//
//int main() {
//    int num = 5213;
//    int digit[10];
//    int i=0;
//    while(num>0)
//    {
//        digit[i]=num%10;
//
//        num=num/10;
//        i++;
//    }
//    for(int j=i-1;j>=0;j--)
//    {
//        printf("%d",digit[j]);
//    }
//
//}
//
//
//do normal
//
//    #include <stdio.h>
//
//int main() {
//    int num = 5213;
//    int digit[10];
//    int i=0;
//    do
//    {
//        digit[i]=num%10;
//
//        num=num/10;
//       i++;
//    }
//    while(num>0);
//
//int j=i-1;
//do
//{
//     printf("%d",digit[j]);
//    j--;
//}
//while(j>=0);
//
//
//}
//
//first
//
//#include<stdio.h>
//int main()
//{
//    int n=3434;
//    while(n>10)
//    {
//        n=n/10;
//    }
//    printf("%d",n);
//}
//
//
//  do first
//
//
//#include<stdio.h>
//int main()
//{
//    int n=3434;
//   do
//    {
//        n=n/10;
//    }
//     while(n>10);
//    printf("%d",n);
//}
