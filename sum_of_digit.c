#include<stdio.h>
int main()
{
  int n,temp,sum=0,rem;
  printf("enter the number");
  scanf("%d",&n);
  temp=n;
  while(temp>0)
    {
      rem=temp%10;
      sum=sum+rem;
      temp=temp/10;
    }
  printf("sum is %d",sum);
  return 0;
}
