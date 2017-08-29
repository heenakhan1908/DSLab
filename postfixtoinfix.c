/*
*Description:evaluation of postfix program
*Author:khan heena
Roll no:16co04
*/
#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct conversion
{
char a[30];
 int top;
 }stack;
 
void push(stack *s,char opr)
{
	 if(s->top>29)
	 {
		 printf("stack is  full");
		 return;
	 }
	 else
	 {
	s->top++;
	s->a[s->top]=opr;
}
 }

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}

int operation(int num1,int num2,char opr)
{
switch(opr)
{
case'+':return num1+num2;
break;
case'-':return num1-num2;
break;
case'*':return num1*num2;
break;
case'/':return num1/num2;
break;
}
}
	
	
	int  evaluate (char  post[])
 {
 char opr;
 stack s;
 int e1,e2,result,i=0; //i declared for counter
 s1.top=-1;
while(post[i]!='\0')
{
	opr=post[i];
	if(isdigit(opr))
		push(&s,opr-'0');
	else
	{
		e1=pop(&s);
		e2=pop(&s);
		result=operation(e1,e2,opr);
		push(&s,result);
	}
	   i++;
}
	  return pop(&s);
}

		
int  main()
 {
 char postfix[30];
 printf("\nENTER postfix EXPRESSION\n");
 scanf("%s",postfix);
 printf("\n\nevaluation ofPOSTFIX EXPRESSION\n=%d",evaluate(postfix));
 return 0;
 }
 
