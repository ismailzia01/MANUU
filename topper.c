#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    float marks;
};
int main()
{
    int n,i;
    printf("Enter no. of students : ");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter students details \n");
    for(i=0; i<n; i++)
    {
        printf("Enter Name :");
        scanf("%s",s[i].name);
        printf("Enter Roll No. :");
        scanf("%d",&s[i].rollno);
        printf("Enter Marks Obtained :");
        scanf("%f",&s[i].marks);
    } 
    struct student topper=s[0];
    for(i=1; i<n; i++)
    {
        if(s[i].marks>topper.marks)
        {
            topper=s[i];

        }
    }
        printf("    ----Topper----\n");
        printf("Name     : %s",topper.name);
        printf("\nRoll No. : %d",topper.rollno);
        printf("\nMarks    : %1f",topper.marks);
        return 0;
}