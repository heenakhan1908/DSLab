#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct conversion
{
char a[30];
 int top;
 }stack;
 
 void push(stack*,char c);
 int pop(stack* s);
 int operation(int num1,int num2,char opr)
 int evaluate(char p[])
 
 
 int  evaluate (char  post[])
 {
 char opr;
 stack s1;
 int e1,e2,result,i; //i declared for counter
 s1.top=-1;
 for(i=0;post[i]!='\0';i++)
 {

		 if(isdigit(post[i]))
					push(&s1,opr-'0');
		else
		{
			e1=pop(&s1);
			e2=pop(&s1);
			result=operation(e1,e2,post[i]);
			push(&s1,result);
		}
}
return pop(&s);
}



int operation(char opr)
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

 void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

int pop(stack *s)
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




int  main()
 {
 char postfix[30];
 printf("\nENTER postfix EXPRESSION\n");
 scanf("%s",postfix);
 printf("\n\nevaluation ofPOSTFIX EXPRESSION\n=%d",evaluate(postfix));
 return 0;
 }
 
