#include <stdio.h>
int main()
{
int n1,n2,n3,n,i;

printf("enter the number of terms:");
scanf("%d",&n);
n1=0;
n2=1;
  
for(i=1;i<=n;i++)
{
  printf("%d",n1); 
  n3=n1+n2;
  n1=n2;
  n2=n3;
  printf("\t");
}
return 0;
}
  
