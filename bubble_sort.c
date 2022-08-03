#include <stdio.h>
int main()
{
  int i,j,n,temp,a[20];
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the element:");
  for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
      }
      for(i=0;i<n-1;i++)
      {
      for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }
  printf("the sorted array:");
  for(j=0;j<n;j++)
    printf("%d\t",a[j]);
    return 0;
}
