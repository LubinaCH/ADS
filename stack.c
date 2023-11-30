#include<stdio.h>
#define max_size 100
int stack[max_size];
int top=-1;
void push(int element)
{
if(top == max_size -1)
{
printf("stack overflow\n");
return;
}
stack[++top]=element;
printf("%d pushed  to the stack\n",element);
}
int pop()
{
if(top == -1)
{
printf("stack underflow\n");
return -1;
}
return stack[top--];
}
int peek()
{
if(top == -1)
{
printf("stack is empty\n");
return -1;
}
return stack[top];
}
int isEmpty()
{
return top == -1;
}
int main()
{
int choice, element;
do
{
printf("Menu\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.Exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("enter the element to push:");
scanf("%d",&element);
push(element);
break;
case 2:
printf("popped elemets:%d\n",pop());
break;
case 3:
printf("Top element:%d\n",peek());
break;
case 4:
printf("existing.....\n");
break;
default:
printf("invalid choice\n");
break;
}
}
while(choice !=5);
return 0;
}
                  