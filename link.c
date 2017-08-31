#include<stdio.h>
#include<stdlib.h>

typedef struct linked-list{
	int data;
	struct linked-list *next;
}node;


void print(node *q)
{
	node *ptr;
	print=q;
	printf("\n"
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
 void insbeg(node **q,int no)
{
	node *temp,*ptr;
temp=*q;
ptr=(node*)malloc(sizeof(node));
ptr->data=no;
if(temp==NULL)
 ptr->next=NULL;
else
 ptr->next=temp;
*q=ptr;
printf("\nELEMENTS OF LINKED LIST AFTER INSERTION\n");
printf(*q);
}
void insend(node**q,int no)
{
node *ptr,*temp;
ptr=(node*)malloc(sizeof(node));
ptr->data=no;
ptr->next=NULL;
*q=ptr;
else
{
while(temp->next!

void insafter(node *q,int no)
{
int loc,k;
node *temp,*ptr,*old;
temp=q;
ptr(node*)malloc(sizeof(node*));
ptr->data=no;
printf("enter the location where the no is to be inserted");
scanf("%d",&loc);
for(k=1;k<loc;k++)
{
if(temp==NULL)
printf("elements are less than provided location");
else
{
old=temp;
temp=temp->next;
}
}
ptr->next=temp;
old->next=ptr;
printf("elements of linklist after insertion");
print(q);
}

void del(node **q,int no)
{
int f=0;
node *old,*temp;
temp=*q;

while(temp!=NULL)
{
if(temp->data==no)
{
f=1;
if(temp==*q)
*q=temp->next;
else
old->next=temp->next;
free(temp);
break;
}
else
{
old=temp;
temp=temp->next;
}
}

if(f==0)
printf("\nthe given no. is not found\n");
printf("\nthe elements of linked list after deletion\n");
print(*q);
}

void traverse(node 
*q)
{
printf("\ntraversing linked list\n");
print(q);
printf("\nend of link linklist\n");
}
int main()
{
node *start,*ptr,*temp;
int i,n,j,no,c;
printf("enter no of nodes: ");
scanf("%d",&n);
printf("\nenter node no 1: ");
start=(node*)malloc(sizeof(node));
scanf("%d",&start->data);
temp=start;
for(i=1;i<n;i++)
{
	ptr=(node*)malloc(sizeof(node));
printf("\nenter node no %d: ",i+1);
scanf("%d",&ptr->data);
		temp->next=ptr;
		temp=ptr;
	}
	temp->next=NULL;
	do{
		printf("\nENTER YOUR CHOICE\n");
		printf("\n1-INSERTION\n2-DELETION\n3-TRAVERSE\n4-Exit\n\n");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				printf("\nENTER THE NUMBER TO BE INSERTED: ");
				scanf("%d",&no);
				printf("\nENTER 1 TO INSERT AT THE BEGINING\n");
				printf("ENTER 2 TO INSERT AT THE END\n");
				printf("ENTER 3 TO INSERT AT A SPECIFIED LOCATION\n");
				scanf("%d",&c);
				switch(c)
				{
					case 1:
						insbeg(&start,no);
						break;
					case 2:
						insend(&start,no);
						break;
					case 3:
						insafter(start,no);
						break;
					default:
						printf("\nInvalid Choice.");
						break;
				}
				break;
			case 2:
				printf("\nENTER THE NUMBER TO BE DELETED: ");
				scanf("%d",&no);
				del(&start,no);
				break;
			case 3:
				traverse(start);
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid Input.");
				break;		

