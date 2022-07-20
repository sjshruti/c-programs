#define metercharge 100
#include<stdio.h>
int main()
{
	char name[20];
	int units;
	float charge,total;
	
	printf("enter customer name:");
	scanf("%s",name);
	printf("enter units consumed:");
	scanf("%d",&units);

	if(units<0)
	{
		printf("invalid input\n");
		return 1;
	}
	if(units<=200)
	{
		charge=units*0.8;
	}
	else if(units<=300)
	{
		charge=0.8*200+0.9*(units-200);
	}
	else
	{
		charge=0.8*200+0.9*100+1*(units-300);
	}

	total=charge+metercharge;

	if(total>400)
	{
		total=total+(0.5*total);
	}
	printf("electricity bill\n");
	printf("name:%s\n",name);
	printf("units:%d\n",units);
	printf("amount:%f\n",total);

	return 0;
}
