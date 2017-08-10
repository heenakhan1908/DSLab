#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	
	return rear==MAX_SIZE-1;
	
}

int isEmpty(){

	return front==-1 && rear==-1;
	
}

int peek(){

	return queue[front];
}

void insertqueue(int d)
{
if(!isFull())
{
if(isEmpty())
{
	front++;
}
rear++;
queue[rear]=d;
printf("%d sucesfully inserted",d);
}
else
printf("queue is full");
}

void delete()
{
if (!isEmpty())
{
int d;
d=queue[front];
{
if(front==rear)
front=rear=-1;
else
front++;
}
printf("the element deleted is %d",d);
}
else
printf("queue is empty");
}








int main(){
	int choice,e;  
	do
	{
		
		printf("\nEnter\n1.display\n2.insert\n3.delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	
		switch(choice){
			case 1:
				e=peek();
				printf("\nElement at the front of queue is : %d",e);
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e); 
			  insertqueue(e);
				break;
			case 3:
			delete();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Choice");
				break;				
		}
	}while(1);
	return 0;
}
