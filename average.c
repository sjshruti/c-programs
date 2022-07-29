#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float m1,m2,m3;
	float avg;
};

int main ()
{
	int n;
	printf("enter the number of students\n");
	scanf("%d",&n);
	struct student s[n];
	
	printf("enter the details :\n");
	for(int i=0; i<n; i++)
	{
		printf("enter rollno, name, marks of 3 subject :\t");
		scanf("%d",&s[i].rollno);
		scanf("%s",s[i].name);
		scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].avg = (s[i].m1+s[i].m2+s[i].m3)/3.0;
	}
	
	printf("student who scored above average is :\n");
	printf("NAME\t ROLL_NUMBER\t AVERAGE\n");
	for(int i=0; i<n; i++)
	{
		if (s[i].avg>=35)
		{
			printf("%s\t\t%d\t%f\n",s[i].name,s[i].rollno,s[i].avg);
		}
		
	}
	printf("student who scored below average is :\n");
	printf("NAME\t ROLL_NUMBER\t AVERAGE\n");
	for(int i=0; i<n; i++)
	{
		if (s[i].avg<35)
		{
			printf("student who scored below average is :\n");
			printf("%s\t\t%d\t\t%f\n",s[i].name,s[i].rollno,s[i].avg);
		}
		}
	return 0;
}
