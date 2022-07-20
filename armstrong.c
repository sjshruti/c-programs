#include <stdio.h>

int main() 
{
 int n,a,b,sum=0;
 printf("enter a number:\n");
 scanf("%d",&n);
 a=n;
 while(n>0)
 {
     b=n%10;
     n=n/10;
     sum=sum+(b*b*b);
 }
 if(sum==a)
 {
     printf(" armstrong");
 }
 else
 {
       printf(" not armstrong");
 }
 return 0;
}
