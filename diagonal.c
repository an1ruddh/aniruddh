#include<stdio.h>
main()
{
int i,j,a,b,sum=0,k=0,m=0,n;
int *p,*q,*r;
int arr[50][50];
printf("Enter size of the row or column.\n");
scanf("%d",&a);
printf("Enter the elements of the array:\n");
for(i=0 ;i<a ;i++)
{
for(j=0;j<a;j++)
{

scanf("%d",&arr[i][j]);
}
}
for(i=0;i<a;i++)
{
p=&arr[i];
sum=sum + *(p+m);
m=m+1;
}

printf("Sum of diagonals is %d",sum);

}
