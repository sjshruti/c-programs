#include<stdio.h>
int main()
{
  int i,n,count=1;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      n=n/10;
      count++;
    }
  printf("count %d",count);
  return 0;
}
