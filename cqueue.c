/*Description:circular queue program
*Author:khan heena
*roll no:16co04
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 7

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
	//queue is full
	return((rear==MAX-SIZE-1&&front==0)||(rear+1==front));
}

int isEmpty(){

	return front==-1&&rear==-1;
	
}

void display(){
	int i=front;
	if(!isEmpty()){
		while(i!=rear){
			printf("%d\t",queue[i]);
			i=(i+1)%MAX_SIZE;
		}
		printf("%d\t",queue[i]);
	}
	else{
		printf("\nQueue is Empty.");
	}	
			
}

void insertqueue(int e)
{
if(!isFull())
	{
		rear=(rear+1)%(MAX_SIZE);
		queue[rear]=e;
	        if(front==-1)
			front++;
		printf("\nElement %d is successfully Inserted",e);
		printf("\n%d-%d",front,rear);
	}
	else
		printf("\nQueue is Full Element cannot be inserted.");	
}

void deletequeue()
{
	int d;
	if (!isEmpty())
{
	d=queue[front];
	if(front==rear)
		front=rear=-1;
	else
		front=(front+1)%(MAX_SIZE);
	printf("the element deleted is %d",d);
	printf("\n%d-%d",front,rear);		
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
				printf("\nElements of queue are");
				display();
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e); 
			        insertqueue(e);
				break;
			case 3:
				deletequeue();
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
