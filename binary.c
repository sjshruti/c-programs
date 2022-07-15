#include <stdio.h>
int main()
{
	int n,i;
	
	printf("enter the number of element:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("enter the element of array:");
		scanf("%d",&a[i]);
		
	}
	int high,low,mid,x;
	low=0;
	high=n-1;
	printf("enter the number to be searched:");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(high+low)/2;
		if(x==a[mid])
		{
			printf("element is located at positio %d",mid+1);
			break;
			
		}
		else if(x<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return 0;
}		 
