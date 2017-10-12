#include<stdio.h>
#define MAX_SIZE 50

int split(int arr[],int lower,int upper)
{
	int pivot=lower,temp;
	int a=pivot+1,b=upper;
	while(b>=a)
	{
		while(arr[a]<arr[pivot])
		a++;
		whlie(arr[b]>arr[pivot])
		b--;
	if(b>a)
	{
		temp=arr[a];
		arr[a]=arr[b];
	arr[b]=temp;
}
}
temp=arr[b];
arr[b]=arr[pivot];
arr[pivot]=temp;
return b;
}

void quik_sort(int a[],int lower,int upper)
{
	if(upper >lower)
	{
	int i;
	i=split(a,lower,upper)
	quik_sort(arr,lower,i-1);
	quik_sort(arr,i+1,upper);
}
}
