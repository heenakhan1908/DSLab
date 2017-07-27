#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct conversion
{
char a[30];
 int top;
 }stack;
 
 void push(stack*,char c);
 
 char pop(stack* s);
 
 int operation(int num 1;int num 2;char opr)
int evaluate(char pop[])
switch(opr)
{
case'+': 
return num1+num2;
break;
case'-':
return num1-num2;
break;
case'*':
return num1*num2;
break;
case'/'
return num1/num2;
break;
}
 int main()
 {
 char postfix[30];
 printf("\nENTER postfix EXPRESSION\n");
 scanf("%s",postfix);
 evaluate(infix,postfix);
 printf("\n\nevaluation ofPOSTFIX EXPRESSION\n=%d",evaluate(postfix));
 return 0;
 }
 
 int convert(char post[])
 {
 char opr;//declare result variable
 stack s1;
 int e1,e2,res,i; //i declared for counter

 s1.top=-1;
 for(i=0;in[i]!='\0';i++)
 {
 if(isdigit(in[i]))
   post[j++]=in[i];
   if(in[i]=='(')
   push(&s1,in[i]);
   if(in[i]=='+'||in[i]=='-'||in[i]=='/'||in[i]=='*')
   {
   if(s1.top!=-1)
   {
   opr=pop(&s1);
   while(priority(opr)>=priority(in[i]))
   {
   post[j++]=opr;
   opr=pop(&s1);
   }
   push(&s1,opr);
   push(&s1,in[i]);
   }
   if(in[i]==')')
{
opr=pop(&s1);
while(opr!=')')
{
post[j++]=opr;
opr=pop(&s1)
}
}
}
while(s1.top!=-1)
