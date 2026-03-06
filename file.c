#include<stdio.h>
int main()
{
    char name[10];
    int roll,n;
    float cgpa;
    FILE *file;
    file=fopen("student.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("\nEnter the number of student: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            printf("\nEnter your name: ");
            scanf("%s",name);
            printf("\nEnter your roll: ");
            scanf("%d",&roll);
            printf("\nEnter your cgpa: ");
            scanf("%f",&cgpa);

            fprintf(file,"%s\t\t%d\t%f\n",name,roll,cgpa);
        }
        fclose(file);
    }
    file=fopen("student.txt","r");
    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        char line[100];
        while(fgets(line,sizeof(line),file))
        {
            printf("%s",line);
        }
        fclose(file);
    }
}
