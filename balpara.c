<<<<<<< HEAD
#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct conversion
{
char a[30];
 int top,i,c;
 }stack;
 
 void push(stack*,char c);
=======
/*
*Description:balanced parathesis program
*Author:khanheena
*Roll no:16co04
*/
#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct balanced
{
char a[30];
 int top;
 }stack;
 
 void push(stack *s ,char c);
>>>>>>> 430f2b1c9ec33cd6b1c3c5faab610bce90fde24a
 char pop(stack* s);
void checkcountinuity(char exp[]);
int isMatchingpair(char left,char right);


int isMatchingpair(char left,char right)
{
 switch (left)
{
<<<<<<< HEAD
  case'(': if(right==')')
  return 1;
  else 
  return 0;
  break;
  case'{': if(right=='}')
  return 1;
  else
   return 0;
  break;
  case'[' : if(right==']')
  return 1;
  else
   return 0;
=======
  case '(' : if(right==')')
	   return 1;
	   else 
	   return 0;
 
  case '{' : if(right=='}')
	   return 1;
	  else
	    return 0;
  case '[' : if(right==']')
	    return 1;
	  else
	    return 0;
  default:
		 return 0;
>>>>>>> 430f2b1c9ec33cd6b1c3c5faab610bce90fde24a
   
}
}

void checkcountinuity(char exp[])
{
<<<<<<< HEAD
int i,c;

stack s;
s.top==-1;
for (i=0;exp[i]!='\0';i++)
{
if (exp[i]=='{'||'('||'[')
 push(&s,exp[i]);
 else
 {
	 if(s.top==-1)
 printf("expression is invalid");
 else
return pop(&s);
 if (isMatchingpair(c,exp[i]))
 continue;
 else
 {
 printf("expression is invalid");
 return;
}
}
}
if(s.top==-1)
printf("expression is valid");
else
printf("expression is invalid");
}
 
 
 






void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}
=======
 int i;
 char c;
 stack s;
 s.top==-1;
 for (i=0;exp[i]!='\0';i++)
{
	 if (exp[i]=='{'||exp[i]=='('||exp[i]=='[')
	 push(&s,exp[i]);
	 else
	 {
		 if(s.top==-1)
		 printf("expression is invalid");
	 else
		return pop(&s);

	 if (isMatchingpair(c,exp[i]))
	      continue;
	 else
	 {
	    printf("expression is invalid");
	    return;
	}
	}
	}
	if(s.top==-1)
	printf("expression is valid");
	else
	printf("expression is invalid");
}
 
 void push(stack *s,char opr)
{
	if(s->top>29)
	{
		printf("stack is full");
		return;
	}
	else
	{
	s->top++;
	s->a[s->top]=opr;
}
}
>>>>>>> 430f2b1c9ec33cd6b1c3c5faab610bce90fde24a

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




<<<<<<< HEAD
int  main()s
 {
 char exp[30];
 printf("\nENTER EXPRESSION CONTAINING ONLY PARANTHESIS\n");
 scanf("%s",exp);
checkcontinuity(exp[i])
=======
int  main()
 {
 char expression[30];
 printf("\nENTER EXPRESSION CONTAINING ONLY PARANTHESIS\n");
 scanf("%s",expression);
checkcontinuity(expression)
>>>>>>> 430f2b1c9ec33cd6b1c3c5faab610bce90fde24a
 return 0; 
 }
 
