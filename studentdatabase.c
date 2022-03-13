#include<stdio.h>
struct student
{
char name[20];
char usn[20];
int marks;
}s[5];
void main()
{
int i,n;
printf("Enter no. of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name of student %d: ",i+1);
scanf("%s",s[i].name);
printf("Enter the USN of student %d: ",i+1);
scanf("%s",s[i].usn);
printf("Enter the marks of student %d: ",i+1);
scanf("%d",&s[i].marks);
}
for(i=0;i<n;i++)
{
printf("Details of student %d\n",i+1);
printf("Name: %s\n",s[i].name);
printf("USN: %s\n",s[i].usn);
printf("Marks: %d\n",s[i].marks);
}
}
