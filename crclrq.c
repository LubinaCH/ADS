#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
if((front==0&&rear==SIZE-1)||(rear==(front-1)%(SIZE-1)))
{
printf("queue is full\n");
}
else if(front==-1)
{
front=rear=0;
queue[rear]=value;
}
else
{
rear++;
queue[rear]=value;
}
}
void dequeue()
{
if(front==-1)
{
printf("queue is empty");
}
else if(front==rear)
{
printf("deleted element:%d\n",queue[front]);
front=rear=-1;
}
else if(front==SIZE-1)
{
printf("deleted element:%d\n",queue[front]);
front=0;
}
else
{
printf("deleted element:%d\n",queue[front]);
front++;
}
}
}
int search(int value)
{
if(front==-1)
{
printf("queue is  empty cannot search element.\n");
return-1;
}
else
{
int i=front;
if(front<=rear)
{
while(i<=rear)
{
if(queue[i]==value)
{
printf("entered %d found at index%d.\n",value,i);
return i;
}
i++;
}
}
else
{
while(i<=SIZE-1)
{
if(queue[i]==value)
{
printf("enterd %dfound at index%d.\n",value,i);
return i;
}
i++;
}
i=0;
while(i<=rear)
{
if(queue[i]==value)
{
printf("enetered %d found at index%d.\n",value,i);
return i;
}
i++;
}
}
printf("element %d not foumd in the queue.\n",value);
return-1;
}
}
void display()
{
if(front==-1)
{
printf("queue is empty\n");
}
else
{
int i=front;
printf("queue elements:");
if(front<=rear)
{
while(i<=rear)
{
printf("%d",queue[i]);
i++;
}
}
else
{
while(i<=SIZE-1)
{
printf("%d",queue[i]);
i++;
}
i=0;
while(i<=rear)
{
printf("%d",queue[i]);
i++;
}
}
printf("\n");
}
}
int main()
{
int choice,value;
do
{
printf("1.enqueue.\n");
printf("2.dequeue.\n");
printf("3.search.\n");
printf("4.display.\n");
printf("5.exit.\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the values to be enterd:");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
printf("enter element you want to search:");
scanf("%d",&value);
search(value);
break;
case 4:
display();
break;
case 5:
exit(0);


default:
printf("invalid choice!please enter a valid option.\n");
}
}
while(choice!=5);
return 0;
}

                