/*
*Description:evaluation of postfix program
*Author:khan heena
Roll no:16co04
*/
#include<stdio.h>

#include<ctype.h>  //for isdigit() function

typedef struct conversion
{
  char a[30];
  int top;
}stack;

 void push(stack *s,char opr)
	{
		if(s->top>29)
		{
			printf("stack is full");
			return ;
		}
			else
		{
		s->top++;
		s->a[s->top]=opr;
	}
	}
  char pop(stack *s)
	{
		if(s->top==-1)
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
		 case '+':
		   return num1+num2;
		 case '-':
		   return num1-num2;
		 case '*':
		   return num1*num2;
		 case '/':
		   return num1/num2;
	   }
	}   
		 
	int evaluate (char post[])
 {
	 int result,n1,n2,i=0;
	 char opr;
	 stack s;
	 s.top=-1;
	 while(post[i]!='\0')
	 {
		 opr=post[i];
		 if(isdigit(opr))
		 push (&s,opr-'0');
		 else
		 {
		 n1=pop(&s);
		 n2=pop(&s);
	     result = operation(n1,n2,opr);
         push(&s,result);
	     }
         i++;
	 }
	 return pop(&s);
 }
 
 
int main()

{
    char postfix[30];
    printf("\n ENTER POSTFIX EXPRESSION\n");
    scanf("%s",postfix);
    evaluate (postfix);
    printf("\n\n EVALUATION OF POSTFIX EXPRESSION=%d",evaluate(postfix));
    return 0;
}

/*******OUTPUT********* 

 ENTER POSTFIX EXPRESSION
1234*+-


 EVALUATION OF POSTFIX EXPRESSION=13
Process returned 0 (0x0)   execution time : 273.049 s
Press any key to continue.
*/
