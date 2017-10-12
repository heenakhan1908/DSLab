#include<stdio.h>
#include<math.h>

#define MAX_SIZE 20
 
 int hash(int k){
	 return k%MAX_SIZE;
 }
 
 int collision_res(int h) {
	 return ++h%MAX_SIZE;
 }

 int quad_probe(int h,int i){
			return (int)(h+pow(i,2))%MAX_SIZE;
}

int double_hash(int h,int i){
	return (h+i*collision_res(h)%MAX_SIZE);
}

 void display(int a[])
		{
			int i;
			printf("elements of the array are\n");
			for(i=0;i<MAX_SIZE;i++)
			printf("%d\t",a[i]);
		}
 int main(){
	 int a[MAX_SIZE],i,h,e,count,ch;
	 for(i=0;i<MAX_SIZE;i++)
	 a[i]=-1;
	 do
	 {
		 count=0;
		 printf("enter the element to be store");
		 scanf("%d",&e);
		 h=hash(e);
		 if(a[h]==-1){
		 a[h]=e;
		 display(a);
	 }
		 else{
				while(count<MAX_SIZE){
					 count++;
					 printf("collision occured at %d",h);
					 printf("please enter your choice for resoulution");
					 printf("\n1.linear probing\n2.quadratic probing\n3.double hashing\n");
					 scanf("%d",&ch);
					 switch(ch){
						 case 1:
						 h=collision_res(h);
						 break;
						 case 2: 
						 h=quad_probe(h,i);
						 break;
						 case 3:
						 h=double_hash(h,i);
						 break;
						 default:
						 printf("invalid chaoice");
						 count--;
						 break;
					 }
					  h=collision_res(h);
			 if(a[h]==-1)
			 {
			 a[h]=e;
			 display(a);
			 break;
		 }
		 }
	 }
		 if(count==MAX_SIZE)
		 {
		 printf("\nthe array is full");
		 return 0;
	 }
	 }while(1);
 }
 
