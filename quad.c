#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d;
	printf("enter the coeffecient of x^2:");
	scanf("%f",&a);

	printf("enter coefficient of x:");
	scanf("%f",&b);
		
	printf("enter the constant:");
	scanf("%f",&c);
			
	d=(b*b)-4*a*c;
			
	if(a==0)
	{
		printf("the equation is not a quardratic equation\n");
		return 1;
	}
	else if (d==0)
	{
		printf("the roots  are real and equal\n");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("r1=%f \n r2=%f \n",r1,r2);
	}
	else if (d>0)
	{
		printf("the roots are real amd distinct\n");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b/-sqrt(d))/(2*a);
		printf("r1=%f \n r2=%f \n",r1,r2);
	}
	else 
	{
		printf("the roots are imaginary\n");
		r1=-b/(2*a);
		r2=sqrt(-d)/(2*a);
		printf("r1=%f+i%f\n",r1,r2);
		printf("r2=%f-i%f\n",r1,r2);
	}
	return 0;
}
