#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,k;
	printf("enter size of matrix a:");
	scanf("%d%d",&m,&n);
	printf("enter size of matrix b:");
	scanf("%d%d",&p,&q);

	if(n != p)
	{
		printf("multiplication not possible");
		return 1;
	}
	int a[m][n], b[p][q], c[m][q];

	printf("enter the elements of matrix a:");
	
	for(i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix a\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	
	}
	printf("enter the elements of matrix b\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("matrix b\n");
	
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("value of a*b is:\n");
	for (i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			int sum=0;
			for(k=0; k<n; k++)
			{	
				sum=sum+a[i][j]*b[j][k];
				c[i][j]=sum;
			}
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	
	


