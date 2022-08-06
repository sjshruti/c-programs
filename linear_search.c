#include<stdio.h>
int main()
{
  int i,j,n,term=0,a[20];
  printf("enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("enter the element:");
      scanf("%d",&a[i]);
    }
  printf("enter the element to be searched:");
  scanf("%d",&j);
  for(i=0;i<n;i++)
    {
      if(a[i]==j)
      {
        term=i+1;
        break;
      }
    }
  if(term>0)
  {
    printf("item found at %d pos",term);
  }
  else
  {
    printf("number not found");
  }
  return 0;
  }
