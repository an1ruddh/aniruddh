#include<stdio.h>
#include<stdlib.h>
#define ss 3
int mstack[3],top=-1;
void push(int ele)
{
if(top==ss-1)
{
printf("Stack is full\n");
return;
}
top++;
mstack[top]=ele;
printf("Element pushed inside is %d\n",mstack[top]);
}
int pop()
{
if(top==-1)
{
printf("Stack is empty\n");
return -1;
}
int ele = mstack[top];
top--;
printf("Element popped is %d\n",ele);
}
void size()
{
printf("Size of the stack is %d\n",top+1);
}
void display()
{
int i;
printf("Elements are: ");
for(i=0;i<=top;i++){
printf("%d ",mstack[i]);
}
printf("\n");
}
void main()
{
int choice,ele;
printf("1.push\n2.pop\n3.size\n4.display\n5.exit\n") ;
while(1){
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the element to push into the stack: ");
scanf("%d",&ele);
push(ele);
break;
case 2:
pop();
break;
case 3:
size();
break;
case 4:
display();
break;
case 5:
exit(0);
}
}
}
O
