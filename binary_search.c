/*
*description:binary search
*Author:khan heena
*Roll no:16co04
*/


#include<stdio.h>
#define MAX_SIZE 100


		int binary_search(int a[],int n,int x)
		{
			int mid=n/2;
			int high=n-1,low=0;
			while(high>=low)
			{
				if(a[mid]==x)
				return mid;
				if(x>a[mid])
				low=mid+1;
			else
				{
				high=mid-1;
				mid=(low+high)/2;
			}
		}
			return -1;
		}
		
		
		int main()
		{
			
			int a[MAX_SIZE],n,i,x,ans;
			printf("enter the no of element");
			scanf("%d",&n);
			printf("enter the element");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("enter the element to be search");
			scanf("%d",&x);
			ans=binary_search(a,n,x);
			if(ans==-1)
			printf("element not found");
			else
			printf("element is on location=%d",ans);
			return 0;
		}

/*****output*****
enter the no of element8
enter the element23
56
78
98
13
68
09
34
enter the element to be search13
element is on location=4

------------------
(program exited with code: 0)
Press return to continue


*/


