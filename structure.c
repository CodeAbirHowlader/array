#include<stdio.h>
struct student{
int roll;
int mark[3];
int total;
float average;

};
int main()
{
    struct student s[50];
    for(int i=0;i<50;i++)
    {
        scanf("%d",s[i].roll);
        int s[i].total;
        for(int j=0;j<3;j++)
        {
            scanf("%d",s[i].mark[j]);
            s[i].total+=s[i].mark[j];
        }
        s[i].average=(float)s[i].total/3;
    }
    int hightmark[3];
    int hightroll[3];
    for(int j=0;j<3;j++)
    {
        hightmark[i]=s[0].mark[j];
         hightroll[i]=s[0].roll[j];
         for(int i=1;i<50;i++)
         {
             if(s[i].mark[j]>hightmark[j])
             {
                 hightmark[j]=s[i].mark[j];
                 hightroll[j]=s[i].roll;
             }
         }
    }
    int hightesttotal=s[0].total;
    int hightesttotalroll=s[0].roll;
     for (i = 1; i <50; i++) {
        if (s[i].total > highestTotal) {
            highesttotal = s[i].total;
            highesttotalroll = s[i].roll;
        }
    }
      for (i = 0; i <50; i++) {
        printf("Roll No: %d, Total: %d, Average: %.2f\n",
               s[i].roll, s[i].total, s[i].average);
    }

    printf("\nHighest marks in each subject:\n");
    for (j = 0; j <3; j++) {
        printf("Subject %d: %d (Roll No: %d)\n",
               j + 1, highestmark[j], highestroll[j]);
    }

    printf("\nStudent with highest total marks:\n");
    printf("Roll No: %d, Total: %d\n", highesttotalRoll, highesttotal);



}
