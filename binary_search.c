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


