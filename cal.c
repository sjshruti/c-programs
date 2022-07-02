#include<stdio.h>
int main()
{
	int a,b,res;
	char op;
	printf("enter an operator:\n");
	scanf(" %c",&op);
	printf("Enter operands:\n");
	scanf("%d%d",&a,&b);
	if(op=='+')
	{
		res=a+b;
	}
	else if(op=='-')
	{
		res=a-b;
	}
	else if(op=='*')
	{
		res=a*b;
	}
	else if(op=='/')
	{
		if(b==0)
		{
		printf("divide by zero error\n");
		return 1;
		}
		else
		{
		res=a/b;
		}
	}
	else if(op=='%')
	{
		if(b==0)
		{
		printf("divide by zero error\n");
		return 2;
		}
		else
		{
		res=a%b;
		}
	}
	else
	{
	printf("invalid operator\n");
	return 3;
	}
	printf("%d%c%d=%d\n",a,op,b,res);
	return 0;
}		




